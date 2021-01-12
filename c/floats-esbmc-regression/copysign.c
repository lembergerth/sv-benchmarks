#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  if (!(copysign(1.0, +2.0) == 1.0)) __VERIFIER_error();
  if (!(copysign(1.0, -2.0) == -1.0)) __VERIFIER_error();
  if (!(copysign(-1.0, +2.0) == 1.0)) __VERIFIER_error();
  if (!(copysign(-1.0, -2.0) == -1.0)) __VERIFIER_error();

  if (!(copysign(INFINITY, -2.0) == -INFINITY)) __VERIFIER_error();

  double snan = copysign(NAN, -2.0);
  if (!(isnan(snan) && signbit(snan))) __VERIFIER_error();
}

