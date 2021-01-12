#include <math.h>
#include <float.h>
#include <inttypes.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

const char* __VERIFIER_nondet_const_char_pointer();

int main(void)
{
  float f1 = nan("1");
  if (!(f1 != f1)) __VERIFIER_error();

  float f2 = nan(__VERIFIER_nondet_const_char_pointer());
  if (!(isnan(f2))) __VERIFIER_error();
}

