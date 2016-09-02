/* APPLE LOCAL file v7 merge */
/* Test the `vmaxs16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vmaxs16 (void)
{
  int16x4_t out_int16x4_t;
  int16x4_t arg0_int16x4_t;
  int16x4_t arg1_int16x4_t;

  out_int16x4_t = vmax_s16 (arg0_int16x4_t, arg1_int16x4_t);
}

/* { dg-final { scan-assembler "vmax\.s16\[ 	\]+\[dD\]\[0-9\]+, \[dD\]\[0-9\]+, \[dD\]\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
