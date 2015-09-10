/*
 * Aladdin to system connection constants.
 *
 * These include ioctl request codes and other command numbers.
 *
 * Each code represents a benchmark. When assigning request codes is that
 * consecutive numbers must be be separated by at least 16, because each
 * benchmark may have multiple kernels.  Dependencies between kernels are
 * expressed via decreasing request codes starting from the main benchmark's
 * code.
 *
 * Example: If SHOC_FFT has three kernels, their codes will be 0x00000060,
 * 0x0000005f, and 0x0000005e. The kernel with the largest code value is the
 * first to be executed, and so on.
 */

#include "aladdin_sys_constants.h"

unsigned MACHSUITE_AES_AES           = 0x00000010;
unsigned MACHSUITE_BACKPROP_BACKPROP = 0x00000020;
unsigned MACHSUITE_BFS_BULK          = 0x00000030;
unsigned MACHSUITE_BFS_QUEUE         = 0x00000040;
unsigned MACHSUITE_FFT_STRIDED       = 0x00000050;
unsigned MACHSUITE_FFT_TRANSPOSE     = 0x00000060;
unsigned MACHSUITE_GEMM_BLOCKED      = 0x00000070;
unsigned MACHSUITE_GEMM_NCUBED       = 0x00000080;
unsigned MACHSUITE_KMP_KMP           = 0x00000090;
unsigned MACHSUITE_MD_GRID           = 0x000000A0;
unsigned MACHSUITE_MD_KNN            = 0x000000B0;
unsigned MACHSUITE_NW_NW             = 0x000000C0;
unsigned MACHSUITE_SORT_MERGE        = 0x000000D0;
unsigned MACHSUITE_SORT_RADIX        = 0x000000E0;
unsigned MACHSUITE_SPMV_CRS          = 0x000000F0;
unsigned MACHSUITE_SPMV_ELLPACK      = 0x00000100;
unsigned MACHSUITE_STENCIL_2D        = 0x00000110;
unsigned MACHSUITE_STENCIL_3D        = 0x00000120;
unsigned MACHSUITE_VITERBI_VITERBI   = 0x00000130;

unsigned SHOC_BBGEMM    = 0x00000140;
unsigned SHOC_FFT       = 0x00000150;
unsigned SHOC_MD        = 0x00000160;
unsigned SHOC_PPSCAN    = 0x00000170;
unsigned SHOC_REDUCTION = 0x00000180;
unsigned SHOC_SSSORT    = 0x00000190;
unsigned SHOC_STENCIL   = 0x000001A0;
unsigned SHOC_TRIAD     = 0x000001B0;

unsigned CORTEXSUITE_STITCH       = 0x000001C0;
unsigned CORTEXSUITE_LOCALIZATION = 0x000001D0;
unsigned CORTEXSUITE_SIFT         = 0x000001E0;
unsigned CORTEXSUITE_DISPARITY_COMPUTESAD        = 0x000001F0;
unsigned CORTEXSUITE_DISPARITY_INTEGRALIMAGE2D2D = 0x000001F1;
unsigned CORTEXSUITE_DISPARITY_FINALSAD          = 0x000001F2;
unsigned CORTEXSUITE_DISPARITY_FINDDISPARITY     = 0x000001F3;
unsigned CORTEXSUITE_MSER              = 0x00000200;
unsigned CORTEXSUITE_MULTI_NCUT        = 0x00000210;
unsigned CORTEXSUITE_SVM               = 0x00000220;
unsigned CORTEXSUITE_TEXTURE_SYNTHESIS = 0x00000230;
unsigned CORTEXSUITE_TRACKING          = 0x00000240;
unsigned CORTEXSUITE_IMAGE_BLUR        = 0x00000250;
unsigned CORTEXSUITE_IMAGE_BLUR_SHADOW = 0x00000260;
unsigned CORTEXSUITE_SOBEL             = 0x00000270;
unsigned CORTEXSUITE_SOBEL_SHADOW      = 0x00000280;

unsigned INTEGRATION_TEST = 0x01000000;

int ALADDIN_FD        = 0x000DECAF;
int ALADDIN_MAP_ARRAY = 0x001DECAF;
int NOT_COMPLETED     = 0x002DECAF;
