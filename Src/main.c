#include <stdio.h>
#include "STM32L476xx.h"
#include "signals.h"
#include "uart.h"
#include "arm_math.h"

extern float32_t signal_1kHz_15kHz_30kHz[SIG_LEN];
extern float32_t signal_15kHz_75kHz_150kHz[SIG_LEN_1];

float g_in_sig_sample;
float g_in_sig_sample_1;

static void plot_signal(void);
static void delay(int d);
static void fpu_enable(void);

/* Set of functions used for statistical analysis
 * of a signal represented as an array of floating-point numbers (sig_src_arr).
 * They perform various calculations to derive statistics about the signal,
 * such as its maximum value, mean (average), minimum value, power, root mean square (RMS),
 * standard deviation, and variance */
static float32_t signal_max(float32_t *sig_src_arr, uint32_t sig_length);
static float32_t signal_mean(float_t *sig_src_arr, uint32_t sig_length);
static float32_t signal_min(float32_t *sig_src_arr, uint32_t sig_length);
static float32_t signal_power(float32_t *sig_src_arr, uint32_t sig_length);
static float32_t signal_rms(float32_t *sig_src_arr,float32_t sig_power, uint32_t sig_length);
static float32_t signal_std(float32_t variance);
static float32_t signal_variance(float32_t *sig_src_arr, float32_t sig_mean, uint32_t sig_length);

/* Maximum variables */
float32_t g_max_value;
float32_t g_max_value_cmsis;
uint32_t g_max_index_cmsis;

/* Mean Square Error variables */
float32_t g_mean_value;
float32_t g_mean_value_cmsis;

/* Minimum variables */
float32_t g_min_value;
float32_t g_min_value_cmsis;
uint32_t g_min_index_cmsis;

/* Power variables */
float32_t g_power_value;
float32_t g_power_value_cmsis;

/* Root Mean Square variables */
float32_t g_rms_value;
float32_t g_rms_value_cmsis;

/* Standard deviation variables */
float32_t g_std_value;
float32_t g_std_value_cmsis;

/* Variance variables */
float32_t g_variance_value;
float32_t g_variance_value_cmsis;


int main()
{
	/* Enable FPU peripheral to allow calculation in floating-point-unit */
	fpu_enable();

	/* Initial uart2 to plot it on the serial monitor*/
	uart2_tx_init();

	/* Call the functions and store the results in variables */
	g_max_value = signal_max((float_t *)signal_1kHz_15kHz_30kHz, (uint32_t) SIG_LEN);
	g_mean_value = signal_mean((float_t *)signal_1kHz_15kHz_30kHz, (uint32_t) SIG_LEN);
	g_min_value = signal_min((float_t *)signal_1kHz_15kHz_30kHz, (uint32_t) SIG_LEN);
	g_power_value = signal_power((float_t *)signal_1kHz_15kHz_30kHz, (uint32_t) SIG_LEN);
	g_rms_value = signal_rms((float_t *)signal_1kHz_15kHz_30kHz, (float32_t) g_power_value, (uint32_t) SIG_LEN);
	g_variance_value = signal_variance((float_t *)signal_1kHz_15kHz_30kHz, (float32_t) g_mean_value, (uint32_t) SIG_LEN);
	g_std_value = signal_std((float32_t) g_variance_value);

	/* set of functions from the CMSIS-DSP library, which is a collection of optimized digital signal processing (DSP)
	 * functions for use with ARM Cortex-M processors. These functions are used to perform various signal processing
	 * and statistical operations on a given array of floating-point numbers (signal_1kHz_15kHz_30kHz),
	 * and the results are stored in the respective output variables (e.g., g_max_value_cmsis, g_mean_value_cmsis, etc.). */
	arm_max_f32(&signal_1kHz_15kHz_30kHz[0], SIG_LEN, &g_max_value_cmsis, &g_max_index_cmsis);
	arm_mean_f32(&signal_1kHz_15kHz_30kHz[0], SIG_LEN, &g_mean_value_cmsis);
	arm_min_f32(&signal_1kHz_15kHz_30kHz[0], SIG_LEN, &g_min_value_cmsis, &g_min_index_cmsis);
	arm_power_f32(&signal_1kHz_15kHz_30kHz[0],SIG_LEN , &g_power_value_cmsis);
	arm_rms_f32(&signal_1kHz_15kHz_30kHz[0], SIG_LEN, &g_rms_value_cmsis);
	arm_var_f32(&signal_1kHz_15kHz_30kHz[0], SIG_LEN, &g_variance_value_cmsis);
	arm_std_f32(&signal_1kHz_15kHz_30kHz[0], SIG_LEN, &g_std_value_cmsis);

    while(1)
    {
    	plot_signal();
    }
}

static float32_t signal_max(float32_t *sig_src_arr, uint32_t sig_length)
{
	float32_t max = sig_src_arr[0];
	uint32_t i;
	for(i = 1; i < sig_length; i++)
	{
		if(max < sig_src_arr[i]){
			max = sig_src_arr[i];
		}
	}

	return max;
}

static float32_t signal_mean(float32_t *sig_src_arr, uint32_t sig_length)
{
	float32_t _mean = 0.0;
	uint32_t i;
	for(i = 0; i < sig_length; i++)
	{
		_mean = _mean + sig_src_arr[i];
	}

	_mean =_mean/(float32_t)sig_length;

	return _mean;
}

static float32_t signal_min(float32_t *sig_src_arr, uint32_t sig_length)
{
	float32_t min = sig_src_arr[0];
	uint32_t i;
	for(i = 1; i < sig_length; i++)
	{
		if(min > sig_src_arr[i]){
			min = sig_src_arr[i];
		}
	}

	return min;
}

static float32_t signal_power(float32_t *sig_src_arr, uint32_t sig_length)
{
	float32_t sum_of_power = 0;
	uint32_t i;
	for(i = 0; i < sig_length; i++)
	{
		sum_of_power = sum_of_power + (sig_src_arr[i]*sig_src_arr[i]);
	}

	return sum_of_power;
}

static float32_t signal_rms(float32_t *sig_src_arr,float32_t sig_power, uint32_t sig_length)
{
	float32_t rms = 0;

	rms = sqrt(sig_power/sig_length);

	return rms;
}

static float32_t signal_std(float32_t variance)
{
	float32_t std = 0;
	std = sqrt(variance);

	return std;
}

static float32_t signal_variance(float32_t *sig_src_arr, float32_t sig_mean, uint32_t sig_length)
{
	float32_t var = 0.0;
	uint32_t i;
	for(i = 0; i < sig_length; i++)
	{
		var = var + powf((sig_src_arr[i] - sig_mean), 2);
	}
	var = var/(sig_length-1);
	return var;
}


/* test in serial plotter */
static void plot_signal(void)
{
	for(int i = 0; i < SIG_LEN; i++)
	{
		printf("%f\r\n", signal_1kHz_15kHz_30kHz[i]);
		//printf("%f\r\n", signal_15kHz_75kHz_150kHz[i]);
		delay(10000);
	}
}
static void delay(int d)
{
	for(int i = 0 ; i < d; i++){}
}

static void fpu_enable(void)
{
	/*Enable FPU */
	SCB->CPACR |=((3UL << 10*2) | (3UL << 11*2));
}
