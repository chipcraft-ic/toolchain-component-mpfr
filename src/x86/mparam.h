/* Generated by MPFR's tuneup.c, 2009-02-09, gcc 4.3 */
/* toto.loria.fr (Pentium M) with gmp-4.2.4 */

#define MPFR_TUNE_CASE "Generic x86"
#define MPFR_MULHIGH_TAB  \
 -1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, \
 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,30, \
 30,30,28,30,30,30,30,30,30,34,34,34,32,32,44,38, \
 43,39,44,44,41,41,44,44,47,43,48,44,47,51,48,48, \
 47,55,48,48,55,51,56,52,51,55,60,56,55,55,60,60, \
 55,63,60,60,63,59,60,60,63,63,60,60,59,67,68,60, \
 63,67,60,68,75,81,68,68,81,81,78,86,81,81,84,80, \
 80,80,81,81,85,85,86,86,84,84,85,91,86,86,87,87, \
 85,91,92,92,93,99,91,97,98,86,93,93,97,91,92,92, \
 90,99,91,97,98,95,96,93,97,115,128,116,117,111,115,109, \
 128,128,129,129,121,115,128,116,126,129,127,121,140,128,129,129, \
 141,129,126,126,127,127,128,128,129,129,138,138,139,127,128,128, \
 129,153,134,150,139,139,140,140,141,141,134,162,139,147,140,144, \
 141,141,150,174,175,151,140,164,165,165,150,154,155,151,152,152, \
 153,165,150,162,163,151,152,176,177,165,158,162,171,163,164,164, \
 164,164,165,165,176,166,177,172,168,163,189,189,165,175,176,176, \
 177,177,183,188,179,189,180,180,186,176,177,177,183,188,189,189, \
 185,180,186,201,177,187,183,188,189,189,200,200,201,191,192,177, \
 188,198,189,204,195,200,201,201,212,192,188,188,189,194,200,200, \
 221,239,240,240,199,235,236,230,237,231,220,208,239,239,234,240, \
 229,247,236,230,231,231,238,238,239,239,240,240,247,265,248,236, \
 237,237,256,238,239,257,258,240,253,253,254,266,249,255,256,274, \
 275,275,276,276,247,253,254,272,267,273,256,256,257,257,276,258, \
 256,256,257,257,258,258,266,294,288,267,275,275,276,276,291,270, \
 257,271,293,272,294,294,260,267,261,275,276,276,291,270,271,285, \
 293,293,294,273,288,267,275,275,276,276,277,284,285,285,293,293, \
 273,294,274,274,275,289,276,290,291,277,292,285,293,293,294,294, \
 297,297,330,290,267,307,276,276,309,293,294,310,311,319,328,328, \
 329,289,330,290,283,283,348,292,293,381,294,382,327,343,384,384, \
 289,289,290,330,291,339,308,308,381,341,342,366,383,383,384,384, \
 345,345,378,378,379,323,324,380,381,381,382,366,375,383,384,376, \
 383,365,384,384,376,340,341,341,342,378,379,379,380,371,417,381, \
 382,382,383,383,384,384,376,376,377,377,378,378,379,379,380,380, \
 381,381,382,382,383,419,420,384,376,412,413,377,378,414,415,388, \
 416,416,417,381,382,382,419,419,384,384,412,385,386,395,396,378, \
 379,419,380,420,381,381,382,382,383,383,384,384,395,405,456,406, \
 417,417,418,418,419,419,420,420,381,491,492,492,383,413,414,384, \
 415,455,456,426,427,417,488,418,419,419,420,420,441,491,492,492, \
 383,413,434,454,455,415,416,416,417,417,418,418,459,429,490,420, \
 486,420,487,454,422,499,423,489,490,490,491,491,492,492,416,438, \
 450,527,528,528,419,485,453,420,432,465,455,455,456,456,479,479, \
 480,491,492,459,493,526,527,494,495,484,485,452,453,453,487,454, \
 455,499,489,456,490,490,480,491,492,481,482,526,527,527,528,528, \
 521,485,486,474,499,487,524,524,489,489,490,490,491,491,492,492, \
 505,505,506,482,483,459,520,472,497,485,498,498,499,535,488,524, \
 489,525,490,490,491,527,528,492,529,493,494,506,495,483,484,484, \
 485,521,522,486,487,487,488,488,489,489,490,562,563,491,492,492, \
 528,528,490,555,556,491,492,492,506,519,520,507,521,521,522,522, \
 523,523,524,524,525,564,552,500,501,527,528,528,529,542,556,530, \
 531,531,558,532,533,520,534,521,548,561,562,562,563,563,564,564, \
 526,526,527,527,528,528,542,555,556,530,531,557,558,558,598,559, \
 585,557,558,558,559,531,560,560,561,561,562,548,535,549,564,564, \
 579,537,580,552,567,567,582,568,569,597,556,584,585,571,600,572, \
 573,559,588,588,533,561,590,604,605,563,564,564,565,607,608,580, \
 567,609,582,582,597,597,528,598,599,571,558,600,559,559,560,602, \
 599,599,600,600,556,601,602,617,633,603,604,634,635,560,561,636, \
 562,562,563,563,564,564,580,715,716,596,717,717,553,568,569,569, \
 570,600,631,601,602,662,663,663,604,604,695,710,711,711,712,712, \
 713,713,714,714,715,715,596,656,657,657,583,598,599,599,600,600, \
 689,769,770,594,691,707,708,596,597,693,710,662,695,711,712,712, \
 713,697,698,714,715,699,716,716,717,717,750,702,719,751,720,704, \
 705,705,722,738,755,771,708,708,709,741,742,710,711,743,744,712, \
 713,761,714,714,715,715,716,716,717,717,766,750,751,751,736,736 \

#define MPFR_SQRHIGH_TAB  \
 -1,0,-1,-1,-1,-1,-1,-1,-1,-1,0,0,-1,-1,8,8, \
 9,9,10,12,11,11,12,12,13,13,14,14,15,15,16,16, \
 17,17,18,18,19,19,20,20,21,21,22,22,23,23,24,24, \
 25,25,26,26,27,27,28,28,29,29,30,30,31,31,32,32, \
 33,33,34,34,35,35,36,36,37,37,38,38,39,39,40,42, \
 41,41,42,42,43,43,44,44,45,45,46,46,47,47,48,48, \
 49,49,50,50,51,51,52,52,53,53,54,54,55,55,56,56, \
 57,57,58,58,59,59,60,60,61,61,62,62,63,63,64,64, \
 65,65,66,66,67,67,68,68,69,84,70,70,74,71,72,72, \
 73,73,74,74,78,75,76,76,77,77,84,78,79,79,80,80, \
 81,84,88,82,83,83,84,84,85,85,92,92,87,87,88,88, \
 89,89,96,90,91,91,92,92,93,93,100,94,95,95,96,96, \
 97,97,98,98,99,99,100,100,101,101,102,102,103,103,104,104, \
 105,105,106,106,107,123,108,108,129,129,126,126,135,135,112,128, \
 129,129,134,134,123,135,128,140,141,129,134,134,135,135,140,132, \
 133,141,122,122,123,135,136,140,153,141,126,126,127,159,128,128, \
 129,129,135,135,141,131,132,132,133,133,134,134,135,135,136,136, \
 137,137,138,138,159,139,140,140,141,141,142,142,143,143,144,144, \
 145,165,146,146,147,147,148,148,149,149,150,150,151,171,152,152, \
 153,153,154,159,155,155,156,156,157,157,158,158,159,159,170,170, \
 161,161,162,162,163,163,188,164,165,165,166,166,167,167,168,186, \
 187,169,170,170,171,171,172,172,173,173,174,174,175,175,176,176, \
 177,177,178,178,179,179,180,180,181,181,182,182,183,183,184,184, \
 185,185,186,186,187,187,188,188,189,189,190,190,191,191,192,192, \
 193,193,194,194,195,195,196,196,197,197,198,198,199,199,200,200, \
 201,201,202,202,203,203,204,204,205,205,206,206,207,207,208,208, \
 209,209,210,210,211,211,212,212,213,213,214,214,215,215,216,216, \
 217,217,218,218,219,261,248,220,221,249,222,222,223,223,224,224, \
 225,225,226,226,227,227,228,228,229,229,230,230,231,231,248,232, \
 233,233,234,234,235,235,236,236,261,285,270,238,239,239,240,248, \
 249,249,242,242,243,251,260,244,261,245,246,246,247,247,248,248, \
 249,249,250,250,251,251,252,252,285,253,254,254,255,255,256,256, \
 257,257,258,258,259,259,260,260,261,261,262,262,263,263,264,264, \
 265,265,266,284,285,267,268,268,269,296,297,270,271,271,272,272, \
 273,273,274,274,275,275,276,276,277,277,278,278,279,279,280,280, \
 281,281,282,282,283,283,284,284,285,321,295,286,287,287,288,288, \
 289,289,320,320,321,321,292,292,293,313,314,294,295,295,296,296, \
 297,297,298,298,309,299,300,300,301,301,302,332,333,333,304,384, \
 375,305,306,306,307,307,308,308,309,309,320,310,311,311,312,312, \
 313,363,394,384,375,375,316,376,357,317,348,348,369,319,320,320, \
 321,321,366,366,378,323,324,324,402,369,359,381,382,382,383,383, \
 373,384,396,374,375,375,387,365,366,399,389,400,401,390,391,402, \
 381,381,382,404,405,405,384,373,374,374,375,386,387,387,388,388, \
 378,378,390,401,391,391,403,414,404,382,383,383,395,395,396,418, \
 401,401,378,402,403,427,428,404,405,417,382,418,419,419,420,384, \
 409,421,422,410,423,423,436,436,437,401,402,366,427,463,464,368, \
 369,369,370,370,455,371,372,456,373,433,434,434,435,471,472,472, \
 473,377,474,378,379,451,380,380,381,381,382,382,383,383,384,384, \
 398,398,399,438,465,387,427,440,441,389,455,390,391,391,392,392, \
 393,393,394,420,395,395,396,396,397,397,398,398,399,399,400,400, \
 401,401,402,402,455,403,404,508,405,405,406,406,407,433,434,447, \
 474,435,436,410,411,411,412,412,413,413,414,492,415,454,455,416, \
 417,417,418,418,419,419,420,420,421,421,422,464,465,423,424,424, \
 425,425,426,426,427,455,456,484,485,429,430,472,473,431,432,432, \
 433,461,434,434,435,477,436,436,437,437,438,438,509,453,468,510, \
 441,441,512,456,471,527,528,472,543,445,544,446,447,447,448,504, \
 449,509,510,450,451,451,452,527,453,483,514,544,545,455,456,546, \
 502,517,518,518,504,519,535,460,461,551,552,507,508,463,464,509, \
 510,525,526,526,527,542,543,543,544,544,545,515,516,546,472,472, \
 473,563,474,474,475,535,551,476,477,582,478,553,479,479,480,480, \
 481,545,546,530,531,547,516,564,597,549,550,486,487,551,488,536, \
 537,489,490,490,491,491,492,492,493,493,494,494,495,495,496,496, \
 497,497,578,546,499,499,500,500,501,501,502,598,599,503,504,504, \
 505,505,506,506,507,507,508,508,509,509,510,510,511,511,512,512 \

#define MPFR_MUL_THRESHOLD 10 /* limbs */
#define MPFR_EXP_2_THRESHOLD 32 /* bits */
#define MPFR_EXP_THRESHOLD 6268 /* bits */
