
#ifndef __SIGNALS_H__
#define __SIGNALS_H__

#include "signals.h"
#include "arm_math.h"


float32_t signal_1kHz_15kHz_30kHz[SIG_LEN] =
{
		0,0.15064,0.30034,0.44816,0.5932,0.73454,0.87134,1.0028,1.128,1.2463,1.3571,1.4597,1.5535,1.6381,1.7131,1.778,1.8328,1.8772,1.9111,1.9345,1.9475,1.9502,1.9429,1.9259,1.8996,1.8644,1.8209,1.7696,1.7112,1.6463,1.5757,1.5001,1.4204,1.3373,1.2517,1.1644,1.0762,0.98806,0.90067,0.81486,0.7314,0.651,0.57437,0.50214,0.43489,0.37315,0.31739,0.26801,0.22534,0.18964,0.1611,0.13982,0.12584,0.11912,0.11956,0.12695,0.14105,0.16153,0.188,0.22001,0.25706,0.29859,0.34401,0.39267,0.44391,0.49703,0.55131,0.60603,0.66045,0.71384,0.76549,0.81469,0.86076,0.90304,0.94094,0.97387,1.0013,1.0228,1.038,1.0464,1.0478,1.0421,1.029,1.0085,0.98059,0.94541,0.90308,0.85385,0.79801,0.73596,0.66812,0.59502,0.51721,0.43533,0.35004,0.26205,0.17213,0.081044,-0.010386,-0.10134,-0.19098,-0.27848,-0.36299,-0.4437,-0.51982,-0.59055,-0.65518,-0.71299,-0.76333,-0.80561,-0.83928,-0.86387,-0.87897,-0.88424,-0.87942,-0.86433,-0.83886,-0.80299,-0.75679,-0.70039,-0.63401,-0.55798,-0.47266,-0.37851,-0.27606,-0.16591,-0.048717,0.074805,0.20389,0.33771,0.47543,0.61615,0.75897,0.90296,1.0472,1.1907,1.3325,1.4718,1.6076,1.7391,1.8654,1.9857,2.0992,2.2053,2.3033,2.3927,2.473,2.5436,2.6043,2.6547,2.6948,2.7243,2.7433,2.7517,2.7497,2.7376,2.7156,2.684,2.6434,2.5941,2.5369,2.4722,2.4007,2.3233,2.2405,2.1532,2.0623,1.9685,1.8726,1.7756,1.6782,1.5812,1.4856,1.3919,1.3011,1.2137,1.1304,1.0519,0.97874,0.9113,0.85008,0.7954,0.74757,0.70679,0.67321,0.64687,0.62777,0.61582,0.61085,0.61265,0.62089,0.63522,0.65521,0.68037,0.71017,0.74401,0.78128,0.82132,0.86344,0.90692,0.95106,0.9951,1.0383,1.08,1.1195,1.156,1.1889,1.2176,1.2415,1.2601,1.2728,1.2793,1.2791,1.272,1.2578,1.2363,1.2073,1.171,1.1272,1.0763,1.0183,0.95367,0.88264,0.80565,0.72321,0.63587,0.54422,0.44893,0.3507,0.25027,0.14841,0.045929,-0.056354,-0.15761,-0.25699,-0.35367,-0.44681,-0.53562,-0.61931,-0.69711,-0.76833,-0.83228,-0.88836,-0.936,-0.97469,-1.004,-1.0236,-1.0332,-1.0325,-1.0215,-1,-0.96816,-0.92606,-0.87388,-0.81191,-0.74049,-0.66007,-0.57114,-0.47428,-0.37013,-0.25938,-0.14278,-0.021135,0.10472,0.23391,0.36553,0.49866,0.63236,0.7657,0.89773,1.0275,1.1542,1.2768,1.3946,1.5067,1.6123,1.7107,1.8013,1.8835,1.9568,2.0206,2.0746,2.1186,2.1522,2.1754,2.188,2.1902,2.182,2.1635,2.1352,2.0972,2.05,1.9941,1.93,1.8584,1.7798,1.6951,1.6048,1.5098,1.411,1.309,1.2048,1.0992,0.99304,0.88711,0.78225,0.67924,0.57882,0.48173,0.38862,0.30013,0.21683,0.13921,0.067735,0.0027776,-0.055353,-0.10642,-0.15026,-0.18679,-0.216,-0.23794,-0.25275,-0.26065,-0.26192,-0.25688,-0.24596,-0.22963,-0.20839,-0.18282,-0.15353,-0.12117,-0.08642,-0.049977,-0.012562,0.025097,0.062268,0.098227,0.13226,0.16367,0.19179,0.21598,0.23564,0.25023,0.25924,0.26221,0.25877,0.2486,0.23142,0.20707,0.17543,0.13646,0.090195,0.036751,-0.023685,-0.090854,-0.16442,-0.24399,-0.32908,-0.41918,-0.51368,-0.61196,-0.71332,-0.81704,-0.92234,-1.0284,-1.1345,-1.2398,-1.3433,-1.4443,-1.542,-1.6354,-1.724,-1.8067,-1.8831,-1.9523,-2.0137,-2.0667,-2.1109,-2.1457,-2.1708,-2.1859,-2.1906,-2.185,-2.1688,-2.1422,-2.1051,-2.0577,-2.0004,-1.9334,-1.8571,-1.772,-1.6788,-1.5778,-1.47,-1.3559,-1.2365,-1.1124,-0.98457,-0.85392,-0.72135,-0.58779,-0.45417,-0.32144,-0.19053,-0.062354,0.062193,0.18225,0.29698,0.40562,0.50741,0.6017,0.68785,0.76532,0.83363,0.89238,0.94122,0.97992,1.0083,1.0263,1.0339,1.0311,1.0182,0.99531,0.96282,0.92109,0.87058,0.81181,0.74536,0.67187,0.59203,0.50655,0.41621,0.32179,0.22412,0.12402,0.022333,-0.080108,-0.18247,-0.28394,-0.38372,-0.48106,-0.57521,-0.66549,-0.75127,-0.83194,-0.907,-0.97596,-1.0384,-1.0941,-1.1426,-1.1839,-1.2178,-1.2443,-1.2634,-1.2752,-1.2799,-1.2778,-1.2692,-1.2545,-1.2341,-1.2085,-1.1784,-1.1442,-1.1066,-1.0663,-1.0241,-0.98048,-0.93632,-0.89232,-0.84921,-0.80771,-0.76852,-0.73232,-0.69975,-0.67144,-0.64795,-0.62979,-0.61745,-0.61132,-0.61175,-0.61902,-0.63334,-0.65484,-0.6836,-0.71959,-0.76274,-0.81288,-0.86977,-0.93311,-1.0025,-1.0776,-1.1577,-1.2424,-1.331,-1.4229,-1.5173,-1.6135,-1.7106,-1.808,-1.9047,-2,-2.093,-2.1828,-2.2686,-2.3497,-2.4253,-2.4945,-2.5568,-2.6115,-2.6579,-2.6956,-2.724,-2.7428,-2.7515,-2.75,-2.7381,-2.7156,-2.6826,-2.6391,-2.5852,-2.5211,-2.4473,-2.3639,-2.2716,-2.1708,-2.0622,-1.9463,-1.8239,-1.6958,-1.5628,-1.4257,-1.2855,-1.143,-0.99914,-0.85489,-0.71119,-0.56897,-0.42914,-0.29263,-0.16029,-0.032974,0.088521,0.20344,0.3111,0.41084,0.5021,0.58438,0.65723,0.72031,0.77333,0.8161,0.8485,0.87051,0.88216,0.88359,0.87502,0.85671,0.82904,0.79245,0.74742,0.69451,0.63436,0.56762,0.495,0.41727,0.3352,0.2496,0.1613,0.071127,-0.020079,-0.11148,-0.20227,-0.29163,-0.3788,-0.46304,-0.54363,-0.61994,-0.69134,-0.75731,-0.81734,-0.87101,-0.91797,-0.95794,-0.9907,-1.0161,-1.0342,-1.0448,-1.0481,-1.0443,-1.0336,-1.0163,-0.99281,-0.96348,-0.92883,-0.88941,-0.84579,-0.7986,-0.74851,-0.6962,-0.64239,-0.58779,-0.53313,-0.47916,-0.42659,-0.37613,-0.32848,-0.28429,-0.24418,-0.20875,-0.17853,-0.15401,-0.13562,-0.12373,-0.11863,-0.12056,-0.12969,-0.1461,-0.16981,-0.20075,-0.2388,-0.28374,-0.33529,-0.39308,-0.45671,-0.52569,-0.59946,-0.67742,-0.75891,-0.84324,-0.92967,-1.0174,-1.1057,-1.1936,-1.2805,-1.3653,-1.4474,-1.5258,-1.5998,-1.6686,-1.7314,-1.7875,-1.8363,-1.8771,-1.9094,-1.9326,-1.9464,-1.9504,-1.9443,-1.9278,-1.9009,-1.8635,-1.8157,-1.7575,-1.6892,-1.611,-1.5232,-1.4264,-1.3211,-1.2077,-1.087,-0.95959,-0.8263,-0.68789,-0.54522,-0.39915,-0.2506,-0.10048,0.05026,0.20069,0.34987,0.49686,0.64076,0.78069,0.91578,1.0452,1.1682,1.2841,1.3922,1.492,1.5828,1.6642,1.7358,1.7974,1.8488,1.8896,1.92,1.9399,1.9495,1.9489,1.9383,1.9182,1.8888,1.8508,1.8046,1.7509,1.6902,1.6234,1.551,1.474,1.393,1.309,1.2227,1.1351,1.0468,0.95881,0.87185,0.78674,0.70422,0.62501,0.54977,0.47914,0.41367,0.35388,0.3002,0.25303,0.21266,0.17933,0.15319,0.13435,0.1228,0.11848,0.12126,0.13092,0.14718,0.16971,0.19808,0.23183,0.27043,0.31333,0.3599,0.4095,0.46144,0.51503,0.56954,0.62424,0.6784,0.73129,0.7822,0.83042,0.8753,0.91619,0.95249,0.98365,1.0092,1.0286,1.0415,1.0476,1.0467,1.0385,1.023,1,0.96967,0.93208,0.88742,0.83595,0.778,0.71396,0.64431,0.56958,0.49034,0.40724,0.32097,0.23225,0.14185,0.050566,-0.040798,-0.13141,-0.22043,-0.30702,-0.39036,-0.46962,-0.54403,-0.61281,-0.67524,-0.73063,-0.77835,-0.81781,-0.84851,-0.86998,-0.88183,-0.88377,-0.87554,-0.85699,-0.82806,-0.78873,-0.73911,-0.67936,-0.60973,-0.53055,-0.44223,-0.34525,-0.24017,-0.12759,-0.0082091,0.11725,0.24801,0.38323,0.52205,0.66357,0.80689,0.95106,1.0951,1.2382,1.3793,1.5175,1.652,1.7818,1.9062,2.0243,2.1354,2.2389,2.3341,2.4205,2.4976,2.5649,2.6222,2.6693,2.7058,2.7318,2.7472,2.7522,2.7468,2.7313,2.7061,2.6715,2.6279,2.5759,2.5161,2.4491,2.3755,2.2962,2.2119,2.1233,2.0313,1.9367,1.8404,1.7431,1.6458,1.5492,1.4541,1.3613,1.2715,1.1855,1.1037,1.0269,0.95559,0.89019,0.83111,0.77869,0.73319,0.6948,0.66362,0.6397,0.623,0.6134,0.61071,0.61469,0.62501,0.64128,0.66305,0.68981,0.72103,0.75609,0.79436,0.83517,0.87782,0.9216,0.96578,1.0096,1.0524,1.0935,1.132,1.1674,1.199,1.2261,1.2483,1.265,1.2757,1.28,1.2775,1.2681,1.2514,1.2274,1.196,1.1572,1.111,1.0577,0.99752,0.93068,0.85761,0.77875,0.69461,0.60577,0.51283,0.41648,0.31743,0.21643,0.11428,0.011771,-0.090261,-0.19098,-0.28956,-0.38515,-0.47694,-0.56412,-0.64593,-0.72162,-0.79049,-0.85188,-0.9052,-0.94991,-0.98553,-1.0116,-1.0279,-1.0341,-1.03,-1.0155,-0.99054,-0.95526,-0.90977,-0.85429,-0.78913,-0.71466,-0.63135,-0.53971,-0.44034,-0.33391,-0.22112,-0.10275,0.020392,0.14746,0.27756,0.40978,0.54321,0.67689,0.8099,0.94129,1.0701,1.1956,1.3167,1.4326,1.5426,1.6459,1.7418,1.8297,1.909,1.9791,2.0397,2.0904,2.1309,2.1611,2.1808,2.1899,2.1886,2.1769,2.1552,2.1235,2.0824,2.0323,1.9736,1.907,1.8329,1.7522,1.6655,1.5736,1.4773,1.3773,1.2745,1.1697,1.0638,0.95766,0.852,0.74767,0.64544,0.54606,0.45022,0.35858,0.27176,0.1903,0.11468,0.045342,-0.017371,-0.07317,-0.12184,-0.16325,-0.19734,-0.22411,-0.24366,-0.25614,-0.2618,-0.26092,-0.25388,-0.2411,-0.22306,-0.20032,-0.17344,-0.14305,-0.10982,-0.074425,-0.037577,2.0831e-15,0.037577,0.074425,0.10982,0.14305,0.17344,0.20032,0.22306,0.2411,0.25388,0.26092,0.2618,0.25614,0.24366,0.22411,0.19734,0.16325,0.12184,0.07317,0.017371,-0.045342,-0.11468,-0.1903,-0.27176,-0.35858,-0.45022,-0.54606,-0.64544,-0.74767,-0.852,-0.95766,-1.0638,-1.1697,-1.2745,-1.3773,-1.4773,-1.5736,-1.6655,-1.7522,-1.8329,-1.907,-1.9736,-2.0323,-2.0824,-2.1235,-2.1552,-2.1769,-2.1886,-2.1899,-2.1808,-2.1611,-2.1309,-2.0904,-2.0397,-1.9791,-1.909,-1.8297,-1.7418,-1.6459,-1.5426,-1.4326,-1.3167,-1.1956,-1.0701,-0.94129,-0.8099,-0.67689,-0.54321,-0.40978,-0.27756,-0.14746,-0.020392,0.10275,0.22112,0.33391,0.44034,0.53971,0.63135,0.71466,0.78913,0.85429,0.90977,0.95526,0.99054,1.0155,1.03,1.0341,1.0279,1.0116,0.98553,0.94991,0.9052,0.85188,0.79049,0.72162,0.64593,0.56412,0.47694,0.38515,0.28956,0.19098,0.090261,-0.011771,-0.11428,-0.21643,-0.31743,-0.41648,-0.51283,-0.60577,-0.69461,-0.77875,-0.85761,-0.93068,-0.99752,-1.0577,-1.111,-1.1572,-1.196,-1.2274,-1.2514,-1.2681,-1.2775,-1.28,-1.2757,-1.265,-1.2483,-1.2261,-1.199,-1.1674,-1.132,-1.0935,-1.0524,-1.0096,-0.96578,-0.9216,-0.87782,-0.83517,-0.79436,-0.75609,-0.72103,-0.68981,-0.66305,-0.64128,-0.62501,-0.61469,-0.61071,-0.6134,-0.623,-0.6397,-0.66362,-0.6948,-0.73319,-0.77869,-0.83111,-0.89019,-0.95559,-1.0269,-1.1037,-1.1855,-1.2715,-1.3613,-1.4541,-1.5492,-1.6458,-1.7431,-1.8404,-1.9367,-2.0313,-2.1233,-2.2119,-2.2962,-2.3755,-2.4491,-2.5161,-2.5759,-2.6279,-2.6715,-2.7061,-2.7313,-2.7468,-2.7522,-2.7472,-2.7318,-2.7058,-2.6693,-2.6222,-2.5649,-2.4976,-2.4205,-2.3341,-2.2389,-2.1354,-2.0243,-1.9062,-1.7818,-1.652,-1.5175,-1.3793,-1.2382,-1.0951,-0.95106,-0.80689,-0.66357,-0.52205,-0.38323,-0.24801,-0.11725,0.0082091,0.12759,0.24017,0.34525,0.44223,0.53055,0.60973,0.67936,0.73911,0.78873,0.82806,0.85699,0.87554,0.88377,0.88183,0.86998,0.84851,0.81781,0.77835,0.73063,0.67524,0.61281,0.54403,0.46962,0.39036,0.30702,0.22043,0.13141,0.040798,-0.050566,-0.14185,-0.23225,-0.32097,-0.40724,-0.49034,-0.56958,-0.64431,-0.71396,-0.778,-0.83595,-0.88742,-0.93208,-0.96967,-1,-1.023,-1.0385,-1.0467,-1.0476,-1.0415,-1.0286,-1.0092,-0.98365,-0.95249,-0.91619,-0.8753,-0.83042,-0.7822,-0.73129,-0.6784,-0.62424,-0.56954,-0.51503,-0.46144,-0.4095,-0.3599,-0.31333,-0.27043,-0.23183,-0.19808,-0.16971,-0.14718,-0.13092,-0.12126,-0.11848,-0.1228,-0.13435,-0.15319,-0.17933,-0.21266,-0.25303,-0.3002,-0.35388,-0.41367,-0.47914,-0.54977,-0.62501,-0.70422,-0.78674,-0.87185,-0.95881,-1.0468,-1.1351,-1.2227,-1.309,-1.393,-1.474,-1.551,-1.6234,-1.6902,-1.7509,-1.8046,-1.8508,-1.8888,-1.9182,-1.9383,-1.9489,-1.9495,-1.9399,-1.92,-1.8896,-1.8488,-1.7974,-1.7358,-1.6642,-1.5828,-1.492,-1.3922,-1.2841,-1.1682,-1.0452,-0.91578,-0.78069,-0.64076,-0.49686,-0.34987,-0.20069,-0.05026,0.10048,0.2506,0.39915,0.54522,0.68789,0.8263,0.95959,1.087,1.2077,1.3211,1.4264,1.5232,1.611,1.6892,1.7575,1.8157,1.8635,1.9009,1.9278,1.9443,1.9504,1.9464,1.9326,1.9094,1.8771,1.8363,1.7875,1.7314,1.6686,1.5998,1.5258,1.4474,1.3653,1.2805,1.1936,1.1057,1.0174,0.92967,0.84324,0.75891,0.67742,0.59946,0.52569,0.45671,0.39308,0.33529,0.28374,0.2388,0.20075,0.16981,0.1461,0.12969,0.12056,0.11863,0.12373,0.13562,0.15401,0.17853,0.20875,0.24418,0.28429,0.32848,0.37613,0.42659,0.47916,0.53313,0.58779,0.64239,0.6962,0.74851,0.7986,0.84579,0.88941,0.92883,0.96348,0.99281,1.0163,1.0336,1.0443,1.0481,1.0448,1.0342,1.0161,0.9907,0.95794,0.91797,0.87101,0.81734,0.75731,0.69134,0.61994,0.54363,0.46304,0.3788,0.29163,0.20227,0.11148,0.020079,-0.071127,-0.1613,-0.2496,-0.3352,-0.41727,-0.495,-0.56762,-0.63436,-0.69451,-0.74742,-0.79245,-0.82904,-0.85671,-0.87502,-0.88359,-0.88216,-0.87051,-0.8485,-0.8161,-0.77333,-0.72031,-0.65723,-0.58438,-0.5021,-0.41084,-0.3111,-0.20344,-0.088521,0.032974,0.16029,0.29263,0.42914,0.56897,0.71119,0.85489,0.99914,1.143,1.2855,1.4257,1.5628,1.6958,1.8239,1.9463,2.0622,2.1708,2.2716,2.3639,2.4473,2.5211,2.5852,2.6391,2.6826,2.7156,2.7381,2.75,2.7515,2.7428,2.724,2.6956,2.6579,2.6115,2.5568,2.4945,2.4253,2.3497,2.2686,2.1828,2.093,2,1.9047,1.808,1.7106,1.6135,1.5173,1.4229,1.331,1.2424,1.1577,1.0776,1.0025,0.93311,0.86977,0.81288,0.76274,0.71959,0.6836,0.65484,0.63334,0.61902,0.61175,0.61132,0.61745,0.62979,0.64795,0.67144,0.69975,0.73232,0.76852,0.80771,0.84921,0.89232,0.93632,0.98048,1.0241,1.0663,1.1066,1.1442,1.1784,1.2085,1.2341,1.2545,1.2692,1.2778,1.2799,1.2752,1.2634,1.2443,1.2178,1.1839,1.1426,1.0941,1.0384,0.97596,0.907,0.83194,0.75127,0.66549,0.57521,0.48106,0.38372,0.28394,0.18247,0.080108,-0.022333,-0.12402,-0.22412,-0.32179,-0.41621,-0.50655,-0.59203,-0.67187,-0.74536,-0.81181,-0.87058,-0.92109,-0.96282,-0.99531,-1.0182,-1.0311,-1.0339,-1.0263,-1.0083,-0.97992,-0.94122,-0.89238,-0.83363,-0.76532,-0.68785,-0.6017,-0.50741,-0.40562,-0.29698,-0.18225,-0.062193,0.062354,0.19053,0.32144,0.45417,0.58779,0.72135,0.85392,0.98457,1.1124,1.2365,1.3559,1.47,1.5778,1.6788,1.772,1.8571,1.9334,2.0004,2.0577,2.1051,2.1422,2.1688,2.185,2.1906,2.1859,2.1708,2.1457,2.1109,2.0667,2.0137,1.9523,1.8831,1.8067,1.724,1.6354,1.542,1.4443,1.3433,1.2398,1.1345,1.0284,0.92234,0.81704,0.71332,0.61196,0.51368,0.41918,0.32908,0.24399,0.16442,0.090854,0.023685,-0.036751,-0.090195,-0.13646,-0.17543,-0.20707,-0.23142,-0.2486,-0.25877,-0.26221,-0.25924,-0.25023,-0.23564,-0.21598,-0.19179,-0.16367,-0.13226,-0.098227,-0.062268,-0.025097,0.012562,0.049977,0.08642,0.12117,0.15353,0.18282,0.20839,0.22963,0.24596,0.25688,0.26192,0.26065,0.25275,0.23794,0.216,0.18679,0.15026,0.10642,0.055353,-0.0027776,-0.067735,-0.13921,-0.21683,-0.30013,-0.38862,-0.48173,-0.57882,-0.67924,-0.78225,-0.88711,-0.99304,-1.0992,-1.2048,-1.309,-1.411,-1.5098,-1.6048,-1.6951,-1.7798,-1.8584,-1.93,-1.9941,-2.05,-2.0972,-2.1352,-2.1635,-2.182,-2.1902,-2.188,-2.1754,-2.1522,-2.1186,-2.0746,-2.0206,-1.9568,-1.8835,-1.8013,-1.7107,-1.6123,-1.5067,-1.3946,-1.2768,-1.1542,-1.0275,-0.89773,-0.7657,-0.63236,-0.49866,-0.36553,-0.23391,-0.10472,0.021135,0.14278,0.25938,0.37013,0.47428,0.57114,0.66007,0.74049,0.81191,0.87388,0.92606,0.96816,1,1.0215,1.0325,1.0332,1.0236,1.004,0.97469,0.936,0.88836,0.83228,0.76833,0.69711,0.61931,0.53562,0.44681,0.35367,0.25699,0.15761,0.056354,-0.045929,-0.14841,-0.25027,-0.3507,-0.44893,-0.54422,-0.63587,-0.72321,-0.80565,-0.88264,-0.95367,-1.0183,-1.0763,-1.1272,-1.171,-1.2073,-1.2363,-1.2578,-1.272,-1.2791,-1.2793,-1.2728,-1.2601,-1.2415,-1.2176,-1.1889,-1.156,-1.1195,-1.08,-1.0383,-0.9951,-0.95106,-0.90692,-0.86344,-0.82132,-0.78128,-0.74401,-0.71017,-0.68037,-0.65521,-0.63522,-0.62089,-0.61265,-0.61085,-0.61582,-0.62777,-0.64687,-0.67321,-0.70679,-0.74757,-0.7954,-0.85008,-0.9113,-0.97874,-1.0519,-1.1304,-1.2137,-1.3011,-1.3919,-1.4856,-1.5812,-1.6782,-1.7756,-1.8726,-1.9685,-2.0623,-2.1532,-2.2405,-2.3233,-2.4007,-2.4722,-2.5369,-2.5941,-2.6434,-2.684,-2.7156,-2.7376,-2.7497,-2.7517,-2.7433,-2.7243,-2.6948,-2.6547,-2.6043,-2.5436,-2.473,-2.3927,-2.3033,-2.2053,-2.0992,-1.9857,-1.8654,-1.7391,-1.6076,-1.4718,-1.3325,-1.1907,-1.0472,-0.90296,-0.75897,-0.61615,-0.47543,-0.33771,-0.20389,-0.074805,0.048717,0.16591,0.27606,0.37851,0.47266,0.55798,0.63401,0.70039,0.75679,0.80299,0.83886,0.86433,0.87942,0.88424,0.87897,0.86387,0.83928,0.80561,0.76333,0.71299,0.65518,0.59055,0.51982,0.4437,0.36299,0.27848,0.19098,0.10134,0.010386,-0.081044,-0.17213,-0.26205,-0.35004,-0.43533,-0.51721,-0.59502,-0.66812,-0.73596,-0.79801,-0.85385,-0.90308,-0.94541,-0.98059,-1.0085,-1.029,-1.0421,-1.0478,-1.0464,-1.038,-1.0228,-1.0013,-0.97387,-0.94094,-0.90304,-0.86076,-0.81469,-0.76549,-0.71384,-0.66045,-0.60603,-0.55131,-0.49703,-0.44391,-0.39267,-0.34401,-0.29859,-0.25706,-0.22001,-0.188,-0.16153,-0.14105,-0.12695,-0.11956,-0.11912,-0.12584,-0.13982,-0.1611,-0.18964,-0.22534,-0.26801,-0.31739,-0.37315,-0.43489,-0.50214,-0.57437,-0.651,-0.7314,-0.81486,-0.90067,-0.98806,-1.0762,-1.1644,-1.2517,-1.3373,-1.4204,-1.5001,-1.5757,-1.6463,-1.7112,-1.7696,-1.8209,-1.8644,-1.8996,-1.9259,-1.9429,-1.9502,-1.9475,-1.9345,-1.9111,-1.8772,-1.8328,-1.778,-1.7131,-1.6381,-1.5535,-1.4597,-1.3571,-1.2463,-1.128,-1.0028,-0.87134,-0.73454,-0.5932,-0.44816,-0.30034,-0.15064,9.5597e-15
};

float32_t signal_15kHz_75kHz_150kHz[SIG_LEN_1] =
{
		0,0.73454,1.3571,1.778,1.9475,1.8644,1.5757,1.1644,0.7314,0.37315,0.1611,0.12695,0.25706,0.49703,0.76549,0.97387,1.0478,0.94541,0.66812,0.26205,-0.19098,-0.59055,-0.83928,-0.86433,-0.63401,-0.16591,0.47543,1.1907,1.8654,2.3927,2.6948,2.7376,2.5369,2.1532,1.6782,1.2137,0.85008,0.64687,0.62089,0.74401,0.95106,1.156,1.2728,1.2363,1.0183,0.63587,0.14841,-0.35367,-0.76833,-1.004,-1,-0.74049,-0.25938,0.36553,1.0275,1.6123,2.0206,2.188,2.0972,1.7798,1.309,0.78225,0.30013,-0.055353,-0.23794,-0.24596,-0.12117,0.062268,0.21598,0.25877,0.13646,-0.16442,-0.61196,-1.1345,-1.6354,-2.0137,-2.1859,-2.1051,-1.772,-1.2365,-0.58779,0.062193,0.6017,0.94122,1.0311,0.87058,0.50655,0.022333,-0.48106,-0.907,-1.1839,-1.2799,-1.2085,-1.0241,-0.80771,-0.64795,-0.61902,-0.76274,-1.0776,-1.5173,-2,-2.4253,-2.6956,-2.7381,-2.5211,-2.0622,-1.4257,-0.71119,-0.032974,0.5021,0.8161,0.87502,0.69451,0.3352,-0.11148,-0.54363,-0.87101,-1.0342,-1.0163,-0.84579,-0.58779,-0.32848,-0.15401,-0.12969,-0.28374,-0.59946,-1.0174,-1.4474,-1.7875,-1.9464,-1.8635,-1.5232,-0.95959,-0.2506,0.49686,1.1682,1.6642,1.92,1.9182,1.6902,1.309,0.87185,0.47914,0.21266,0.11848,0.19808,0.4095,0.6784,0.91619,1.0415,1,0.778,0.40724,-0.040798,-0.46962,-0.77835,-0.88377,-0.73911,-0.34525,0.24801,0.95106,1.652,2.2389,2.6222,2.7522,2.6279,2.2962,1.8404,1.3613,0.95559,0.6948,0.61071,0.68981,0.87782,1.0935,1.2483,1.2681,1.111,0.77875,0.31743,-0.19098,-0.64593,-0.94991,-1.03,-0.85429,-0.44034,0.14746,0.8099,1.4326,1.909,2.1611,2.1552,1.907,1.4773,0.95766,0.45022,0.045342,-0.19734,-0.26092,-0.17344,-5.0223e-15,0.17344,0.26092,0.19734,-0.045342,-0.45022,-0.95766,-1.4773,-1.907,-2.1552,-2.1611,-1.909,-1.4326,-0.8099,-0.14746,0.44034,0.85429,1.03,0.94991,0.64593,0.19098,-0.31743,-0.77875,-1.111,-1.2681,-1.2483,-1.0935,-0.87782,-0.68981,-0.61071,-0.6948,-0.95559,-1.3613,-1.8404,-2.2962,-2.6279,-2.7522,-2.6222,-2.2389,-1.652,-0.95106,-0.24801,0.34525,0.73911,0.88377,0.77835,0.46962,0.040798,-0.40724,-0.778,-1,-1.0415,-0.91619,-0.6784,-0.4095,-0.19808,-0.11848,-0.21266,-0.47914,-0.87185,-1.309,-1.6902,-1.9182,-1.92,-1.6642,-1.1682,-0.49686,0.2506,0.95959,1.5232,1.8635,1.9464,1.7875,1.4474,1.0174,0.59946,0.28374,0.12969,0.15401,0.32848,0.58779,0.84579,1.0163,1.0342,0.87101,0.54363,0.11148,-0.3352,-0.69451,-0.87502,-0.8161,-0.5021,0.032974,0.71119,1.4257,2.0622,2.5211,2.7381,2.6956,2.4253,2,1.5173,1.0776,0.76274,0.61902,0.64795,0.80771,1.0241,1.2085,1.2799,1.1839,0.907,0.48106,-0.022333,-0.50655,-0.87058,-1.0311,-0.94122,-0.6017,-0.062193,0.58779,1.2365,1.772,2.1051,2.1859,2.0137,1.6354,1.1345,0.61196,0.16442,-0.13646,-0.25877,-0.21598,-0.062268,0.12117,0.24596,0.23794,0.055353,-0.30013,-0.78225,-1.309,-1.7798,-2.0972,-2.188,-2.0206,-1.6123,-1.0275,-0.36553,0.25938,0.74049,1,1.004,0.76833,0.35367,-0.14841,-0.63587,-1.0183,-1.2363,-1.2728,-1.156,-0.95106,-0.74401,-0.62089,-0.64687,-0.85008,-1.2137,-1.6782,-2.1532,-2.5369,-2.7376,-2.6948,-2.3927,-1.8654,-1.1907,-0.47543,0.16591,0.63401,0.86433,0.83928,0.59055,0.19098,-0.26205,-0.66812,-0.94541,-1.0478,-0.97387,-0.76549,-0.49703,-0.25706,-0.12695,-0.1611,-0.37315,-0.7314,-1.1644,-1.5757,-1.8644,-1.9475,-1.778,-1.3571,-0.73454,-3.3073e-14,0.73454,1.3571,1.778,1.9475,1.8644,1.5757,1.1644,0.7314,0.37315,0.1611,0.12695,0.25706,0.49703,0.76549,0.97387,1.0478,0.94541,0.66812,0.26205,-0.19098,-0.59055,-0.83928,-0.86433,-0.63401,-0.16591,0.47543,1.1907,1.8654,2.3927,2.6948,2.7376,2.5369,2.1532,1.6782,1.2137,0.85008,0.64687,0.62089,0.74401,0.95106,1.156,1.2728,1.2363,1.0183,0.63587,0.14841,-0.35367,-0.76833,-1.004,-1,-0.74049,-0.25938,0.36553,1.0275,1.6123,2.0206,2.188,2.0972,1.7798,1.309,0.78225,0.30013,-0.055353,-0.23794,-0.24596,-0.12117,0.062268,0.21598,0.25877,0.13646,-0.16442,-0.61196,-1.1345,-1.6354,-2.0137,-2.1859,-2.1051,-1.772,-1.2365,-0.58779,0.062193,0.6017,0.94122,1.0311,0.87058,0.50655,0.022333,-0.48106,-0.907,-1.1839,-1.2799,-1.2085,-1.0241,-0.80771,-0.64795,-0.61902,-0.76274,-1.0776,-1.5173,-2,-2.4253,-2.6956,-2.7381,-2.5211,-2.0622,-1.4257,-0.71119,-0.032974,0.5021,0.8161,0.87502,0.69451,0.3352,-0.11148,-0.54363,-0.87101,-1.0342,-1.0163,-0.84579,-0.58779,-0.32848,-0.15401,-0.12969,-0.28374,-0.59946,-1.0174,-1.4474,-1.7875,-1.9464,-1.8635,-1.5232,-0.95959,-0.2506,0.49686,1.1682,1.6642,1.92,1.9182,1.6902,1.309,0.87185,0.47914,0.21266,0.11848,0.19808,0.4095,0.6784,0.91619,1.0415,1,0.778,0.40724,-0.040798,-0.46962,-0.77835,-0.88377,-0.73911,-0.34525,0.24801,0.95106,1.652,2.2389,2.6222,2.7522,2.6279,2.2962,1.8404,1.3613,0.95559,0.6948,0.61071,0.68981,0.87782,1.0935,1.2483,1.2681,1.111,0.77875,0.31743,-0.19098,-0.64593,-0.94991,-1.03,-0.85429,-0.44034,0.14746,0.8099,1.4326,1.909,2.1611,2.1552,1.907,1.4773,0.95766,0.45022,0.045342,-0.19734,-0.26092,-0.17344,-8.5601e-16,0.17344,0.26092,0.19734,-0.045342,-0.45022,-0.95766,-1.4773,-1.907,-2.1552,-2.1611,-1.909,-1.4326,-0.8099,-0.14746,0.44034,0.85429,1.03,0.94991,0.64593,0.19098,-0.31743,-0.77875,-1.111,-1.2681,-1.2483,-1.0935,-0.87782,-0.68981,-0.61071,-0.6948,-0.95559,-1.3613,-1.8404,-2.2962,-2.6279,-2.7522,-2.6222,-2.2389,-1.652,-0.95106,-0.24801,0.34525,0.73911,0.88377,0.77835,0.46962,0.040798,-0.40724,-0.778,-1,-1.0415,-0.91619,-0.6784,-0.4095,-0.19808,-0.11848,-0.21266,-0.47914,-0.87185,-1.309,-1.6902,-1.9182,-1.92,-1.6642,-1.1682,-0.49686,0.2506,0.95959,1.5232,1.8635,1.9464,1.7875,1.4474,1.0174,0.59946,0.28374,0.12969,0.15401,0.32848,0.58779,0.84579,1.0163,1.0342,0.87101,0.54363,0.11148,-0.3352,-0.69451,-0.87502,-0.8161,-0.5021,0.032974,0.71119,1.4257,2.0622,2.5211,2.7381,2.6956,2.4253,2,1.5173,1.0776,0.76274,0.61902,0.64795,0.80771,1.0241,1.2085,1.2799,1.1839,0.907,0.48106,-0.022333,-0.50655,-0.87058,-1.0311,-0.94122,-0.6017,-0.062193,0.58779,1.2365,1.772,2.1051,2.1859,2.0137,1.6354,1.1345,0.61196,0.16442,-0.13646,-0.25877,-0.21598,-0.062268,0.12117,0.24596,0.23794,0.055353,-0.30013,-0.78225,-1.309,-1.7798,-2.0972,-2.188,-2.0206,-1.6123,-1.0275,-0.36553,0.25938,0.74049,1,1.004,0.76833,0.35367,-0.14841,-0.63587,-1.0183,-1.2363,-1.2728,-1.156,-0.95106,-0.74401,-0.62089,-0.64687,-0.85008,-1.2137,-1.6782,-2.1532,-2.5369,-2.7376,-2.6948,-2.3927,-1.8654,-1.1907,-0.47543,0.16591,0.63401,0.86433,0.83928,0.59055,0.19098,-0.26205,-0.66812,-0.94541,-1.0478,-0.97387,-0.76549,-0.49703,-0.25706,-0.12695,-0.1611,-0.37315,-0.7314,-1.1644,-1.5757,-1.8644,-1.9475,-1.778,-1.3571,-0.73454,-6.6146e-14,0.73454,1.3571,1.778,1.9475,1.8644,1.5757,1.1644,0.7314,0.37315,0.1611,0.12695,0.25706,0.49703,0.76549,0.97387,1.0478,0.94541,0.66812,0.26205,-0.19098,-0.59055,-0.83928,-0.86433,-0.63401,-0.16591,0.47543,1.1907,1.8654,2.3927,2.6948,2.7376,2.5369,2.1532,1.6782,1.2137,0.85008,0.64687,0.62089,0.74401,0.95106,1.156,1.2728,1.2363,1.0183,0.63587,0.14841,-0.35367,-0.76833,-1.004,-1,-0.74049,-0.25938,0.36553,1.0275,1.6123,2.0206,2.188,2.0972,1.7798,1.309,0.78225,0.30013,-0.055353,-0.23794,-0.24596,-0.12117,0.062268,0.21598,0.25877,0.13646,-0.16442,-0.61196,-1.1345,-1.6354,-2.0137,-2.1859,-2.1051,-1.772,-1.2365,-0.58779,0.062193,0.6017,0.94122,1.0311,0.87058,0.50655,0.022333,-0.48106,-0.907,-1.1839,-1.2799,-1.2085,-1.0241,-0.80771,-0.64795,-0.61902,-0.76274,-1.0776,-1.5173,-2,-2.4253,-2.6956,-2.7381,-2.5211,-2.0622,-1.4257,-0.71119,-0.032974,0.5021,0.8161,0.87502,0.69451,0.3352,-0.11148,-0.54363,-0.87101,-1.0342,-1.0163,-0.84579,-0.58779,-0.32848,-0.15401,-0.12969,-0.28374,-0.59946,-1.0174,-1.4474,-1.7875,-1.9464,-1.8635,-1.5232,-0.95959,-0.2506,0.49686,1.1682,1.6642,1.92,1.9182,1.6902,1.309,0.87185,0.47914,0.21266,0.11848,0.19808,0.4095,0.6784,0.91619,1.0415,1,0.778,0.40724,-0.040798,-0.46962,-0.77835,-0.88377,-0.73911,-0.34525,0.24801,0.95106,1.652,2.2389,2.6222,2.7522,2.6279,2.2962,1.8404,1.3613,0.95559,0.6948,0.61071,0.68981,0.87782,1.0935,1.2483,1.2681,1.111,0.77875,0.31743,-0.19098,-0.64593,-0.94991,-1.03,-0.85429,-0.44034,0.14746,0.8099,1.4326,1.909,2.1611,2.1552,1.907,1.4773,0.95766,0.45022,0.045342,-0.19734,-0.26092,-0.17344,-1.4453e-14,0.17344,0.26092,0.19734,-0.045342,-0.45022,-0.95766,-1.4773,-1.907,-2.1552,-2.1611,-1.909,-1.4326,-0.8099,-0.14746,0.44034,0.85429,1.03,0.94991,0.64593,0.19098,-0.31743,-0.77875,-1.111,-1.2681,-1.2483,-1.0935,-0.87782,-0.68981,-0.61071,-0.6948,-0.95559,-1.3613,-1.8404,-2.2962,-2.6279,-2.7522,-2.6222,-2.2389,-1.652,-0.95106,-0.24801,0.34525,0.73911,0.88377,0.77835,0.46962,0.040798,-0.40724,-0.778,-1,-1.0415,-0.91619,-0.6784,-0.4095,-0.19808,-0.11848,-0.21266,-0.47914,-0.87185,-1.309,-1.6902,-1.9182,-1.92,-1.6642,-1.1682,-0.49686,0.2506,0.95959,1.5232,1.8635,1.9464,1.7875,1.4474,1.0174,0.59946,0.28374,0.12969,0.15401,0.32848,0.58779,0.84579,1.0163,1.0342,0.87101,0.54363,0.11148,-0.3352,-0.69451,-0.87502,-0.8161,-0.5021,0.032974,0.71119,1.4257,2.0622,2.5211,2.7381,2.6956,2.4253,2,1.5173,1.0776,0.76274,0.61902,0.64795,0.80771,1.0241,1.2085,1.2799,1.1839,0.907,0.48106,-0.022333,-0.50655,-0.87058,-1.0311,-0.94122,-0.6017,-0.062193,0.58779,1.2365,1.772,2.1051,2.1859,2.0137,1.6354,1.1345,0.61196,0.16442,-0.13646,-0.25877,-0.21598,-0.062268,0.12117,0.24596,0.23794,0.055353,-0.30013,-0.78225,-1.309,-1.7798,-2.0972,-2.188,-2.0206,-1.6123,-1.0275,-0.36553,0.25938,0.74049,1,1.004,0.76833,0.35367,-0.14841,-0.63587,-1.0183,-1.2363,-1.2728,-1.156,-0.95106,-0.74401,-0.62089,-0.64687,-0.85008,-1.2137,-1.6782,-2.1532,-2.5369,-2.7376,-2.6948,-2.3927,-1.8654,-1.1907,-0.47543,0.16591,0.63401,0.86433,0.83928,0.59055,0.19098,-0.26205,-0.66812,-0.94541,-1.0478,-0.97387,-0.76549,-0.49703,-0.25706,-0.12695,-0.1611,-0.37315,-0.7314,-1.1644,-1.5757,-1.8644,-1.9475,-1.778,-1.3571,-0.73454,-1.3954e-14,0.73454,1.3571,1.778,1.9475,1.8644,1.5757,1.1644,0.7314,0.37315,0.1611,0.12695,0.25706,0.49703,0.76549,0.97387,1.0478,0.94541,0.66812,0.26205,-0.19098,-0.59055,-0.83928,-0.86433,-0.63401,-0.16591,0.47543,1.1907,1.8654,2.3927,2.6948,2.7376,2.5369,2.1532,1.6782,1.2137,0.85008,0.64687,0.62089,0.74401,0.95106,1.156,1.2728,1.2363,1.0183,0.63587,0.14841,-0.35367,-0.76833,-1.004,-1,-0.74049,-0.25938,0.36553,1.0275,1.6123,2.0206,2.188,2.0972,1.7798,1.309,0.78225,0.30013,-0.055353,-0.23794,-0.24596,-0.12117,0.062268,0.21598,0.25877,0.13646,-0.16442,-0.61196,-1.1345,-1.6354,-2.0137,-2.1859,-2.1051,-1.772,-1.2365,-0.58779,0.062193,0.6017,0.94122,1.0311,0.87058,0.50655,0.022333,-0.48106,-0.907,-1.1839,-1.2799,-1.2085,-1.0241,-0.80771,-0.64795,-0.61902,-0.76274,-1.0776,-1.5173,-2,-2.4253,-2.6956,-2.7381,-2.5211,-2.0622,-1.4257,-0.71119,-0.032974,0.5021,0.8161,0.87502,0.69451,0.3352,-0.11148,-0.54363,-0.87101,-1.0342,-1.0163,-0.84579,-0.58779,-0.32848,-0.15401,-0.12969,-0.28374,-0.59946,-1.0174,-1.4474,-1.7875,-1.9464,-1.8635,-1.5232,-0.95959,-0.2506,0.49686,1.1682,1.6642,1.92,1.9182,1.6902,1.309,0.87185,0.47914,0.21266,0.11848,0.19808,0.4095,0.6784,0.91619,1.0415,1,0.778,0.40724,-0.040798,-0.46962,-0.77835,-0.88377,-0.73911,-0.34525,0.24801,0.95106,1.652,2.2389,2.6222,2.7522,2.6279,2.2962,1.8404,1.3613,0.95559,0.6948,0.61071,0.68981,0.87782,1.0935,1.2483,1.2681,1.111,0.77875,0.31743,-0.19098,-0.64593,-0.94991,-1.03,-0.85429,-0.44034,0.14746,0.8099,1.4326,1.909,2.1611,2.1552,1.907,1.4773,0.95766,0.45022,0.045342,-0.19734,-0.26092,-0.17344,-5.292e-14,0.17344,0.26092,0.19734,-0.045342,-0.45022,-0.95766,-1.4773,-1.907,-2.1552,-2.1611,-1.909,-1.4326,-0.8099,-0.14746,0.44034,0.85429,1.03,0.94991,0.64593,0.19098,-0.31743,-0.77875,-1.111,-1.2681,-1.2483,-1.0935,-0.87782,-0.68981,-0.61071,-0.6948,-0.95559,-1.3613,-1.8404,-2.2962,-2.6279,-2.7522,-2.6222,-2.2389,-1.652,-0.95106,-0.24801,0.34525,0.73911,0.88377,0.77835,0.46962,0.040798,-0.40724,-0.778,-1,-1.0415,-0.91619,-0.6784,-0.4095,-0.19808,-0.11848,-0.21266,-0.47914,-0.87185,-1.309,-1.6902,-1.9182,-1.92,-1.6642,-1.1682,-0.49686,0.2506,0.95959,1.5232,1.8635,1.9464,1.7875,1.4474,1.0174,0.59946,0.28374,0.12969,0.15401,0.32848,0.58779,0.84579,1.0163,1.0342,0.87101,0.54363,0.11148,-0.3352,-0.69451,-0.87502,-0.8161,-0.5021,0.032974,0.71119,1.4257,2.0622,2.5211,2.7381,2.6956,2.4253,2,1.5173,1.0776,0.76274,0.61902,0.64795,0.80771,1.0241,1.2085,1.2799,1.1839,0.907,0.48106,-0.022333,-0.50655,-0.87058,-1.0311,-0.94122,-0.6017,-0.062193,0.58779,1.2365,1.772,2.1051,2.1859,2.0137,1.6354,1.1345,0.61196,0.16442,-0.13646,-0.25877,-0.21598,-0.062268,0.12117,0.24596,0.23794,0.055353,-0.30013,-0.78225,-1.309,-1.7798,-2.0972,-2.188,-2.0206,-1.6123,-1.0275,-0.36553,0.25938,0.74049,1,1.004,0.76833,0.35367,-0.14841,-0.63587,-1.0183,-1.2363,-1.2728,-1.156,-0.95106,-0.74401,-0.62089,-0.64687,-0.85008,-1.2137,-1.6782,-2.1532,-2.5369,-2.7376,-2.6948,-2.3927,-1.8654,-1.1907,-0.47543,0.16591,0.63401,0.86433,0.83928,0.59055,0.19098,-0.26205,-0.66812,-0.94541,-1.0478,-0.97387,-0.76549,-0.49703,-0.25706,-0.12695,-0.1611,-0.37315,-0.7314,-1.1644,-1.5757,-1.8644,-1.9475,-1.778,-1.3571,-0.73454,-1.3229e-13,0.73454,1.3571,1.778,1.9475,1.8644,1.5757,1.1644,0.7314,0.37315,0.1611,0.12695,0.25706,0.49703,0.76549,0.97387,1.0478,0.94541,0.66812,0.26205,-0.19098,-0.59055,-0.83928,-0.86433,-0.63401,-0.16591,0.47543,1.1907,1.8654,2.3927,2.6948,2.7376,2.5369,2.1532,1.6782,1.2137,0.85008,0.64687,0.62089,0.74401,0.95106,1.156,1.2728,1.2363,1.0183,0.63587,0.14841,-0.35367,-0.76833,-1.004,-1,-0.74049,-0.25938,0.36553,1.0275,1.6123,2.0206,2.188,2.0972,1.7798,1.309,0.78225,0.30013,-0.055353,-0.23794,-0.24596,-0.12117,0.062268,0.21598,0.25877,0.13646,-0.16442,-0.61196,-1.1345,-1.6354,-2.0137,-2.1859,-2.1051,-1.772,-1.2365,-0.58779,0.062193,0.6017,0.94122,1.0311,0.87058,0.50655,0.022333,-0.48106,-0.907,-1.1839,-1.2799,-1.2085,-1.0241,-0.80771,-0.64795,-0.61902,-0.76274,-1.0776,-1.5173,-2,-2.4253,-2.6956,-2.7381,-2.5211,-2.0622,-1.4257,-0.71119,-0.032974,0.5021,0.8161,0.87502,0.69451,0.3352,-0.11148,-0.54363,-0.87101,-1.0342,-1.0163,-0.84579,-0.58779,-0.32848,-0.15401,-0.12969,-0.28374,-0.59946,-1.0174,-1.4474,-1.7875,-1.9464,-1.8635,-1.5232,-0.95959,-0.2506,0.49686,1.1682,1.6642,1.92,1.9182,1.6902,1.309,0.87185,0.47914,0.21266,0.11848,0.19808,0.4095,0.6784,0.91619,1.0415,1,0.778,0.40724,-0.040798,-0.46962,-0.77835,-0.88377,-0.73911,-0.34525,0.24801,0.95106,1.652,2.2389,2.6222,2.7522,2.6279,2.2962,1.8404,1.3613,0.95559,0.6948,0.61071,0.68981,0.87782,1.0935,1.2483,1.2681,1.111,0.77875,0.31743,-0.19098,-0.64593,-0.94991,-1.03,-0.85429,-0.44034,0.14746,0.8099,1.4326,1.909,2.1611,2.1552,1.907,1.4773,0.95766,0.45022,0.045342,-0.19734,-0.26092,-0.17344,-2.7437e-14,0.17344,0.26092,0.19734,-0.045342,-0.45022,-0.95766,-1.4773,-1.907,-2.1552,-2.1611,-1.909,-1.4326,-0.8099,-0.14746,0.44034,0.85429,1.03,0.94991,0.64593,0.19098,-0.31743,-0.77875,-1.111,-1.2681,-1.2483,-1.0935,-0.87782,-0.68981,-0.61071,-0.6948,-0.95559,-1.3613,-1.8404,-2.2962,-2.6279,-2.7522,-2.6222,-2.2389,-1.652,-0.95106,-0.24801,0.34525,0.73911,0.88377,0.77835,0.46962,0.040798,-0.40724,-0.778,-1,-1.0415,-0.91619,-0.6784,-0.4095,-0.19808,-0.11848,-0.21266,-0.47914,-0.87185,-1.309,-1.6902,-1.9182,-1.92,-1.6642,-1.1682,-0.49686,0.2506,0.95959,1.5232,1.8635,1.9464,1.7875,1.4474,1.0174,0.59946,0.28374,0.12969,0.15401,0.32848,0.58779,0.84579,1.0163,1.0342,0.87101,0.54363,0.11148,-0.3352,-0.69451,-0.87502,-0.8161,-0.5021,0.032974,0.71119,1.4257,2.0622,2.5211,2.7381,2.6956,2.4253,2,1.5173,1.0776,0.76274,0.61902,0.64795,0.80771,1.0241,1.2085,1.2799,1.1839,0.907,0.48106,-0.022333,-0.50655,-0.87058,-1.0311,-0.94122,-0.6017,-0.062193,0.58779,1.2365,1.772,2.1051,2.1859,2.0137,1.6354,1.1345,0.61196,0.16442,-0.13646,-0.25877,-0.21598,-0.062268,0.12117,0.24596,0.23794,0.055353,-0.30013,-0.78225,-1.309,-1.7798,-2.0972,-2.188,-2.0206,-1.6123,-1.0275,-0.36553,0.25938,0.74049,1,1.004,0.76833,0.35367,-0.14841,-0.63587,-1.0183,-1.2363,-1.2728,-1.156,-0.95106,-0.74401,-0.62089,-0.64687,-0.85008,-1.2137,-1.6782,-2.1532,-2.5369,-2.7376,-2.6948,-2.3927,-1.8654,-1.1907,-0.47543,0.16591,0.63401,0.86433,0.83928,0.59055,0.19098,-0.26205,-0.66812,-0.94541,-1.0478,-0.97387,-0.76549,-0.49703,-0.25706,-0.12695,-0.1611,-0.37315,-0.7314,-1.1644,-1.5757,-1.8644,-1.9475,-1.778,-1.3571,-0.73454,-7.2994e-14
};

#endif
