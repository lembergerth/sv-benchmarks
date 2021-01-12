#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  if (!(round(2.3) == 2.0)) __VERIFIER_error();
  if (!(round(2.5) == 3.0)) __VERIFIER_error();
  if (!(round(2.7) == 3.0)) __VERIFIER_error();

  if (!(round(-2.3) == -2.0)) __VERIFIER_error();
  if (!(round(-2.5) == -3.0)) __VERIFIER_error();
  if (!(round(-2.7) == -3.0)) __VERIFIER_error();

  double c = round(-0.0);
  if (!((c == -0.0) && signbit(c))) __VERIFIER_error();

  c = round(-INFINITY);
  if (!(isinf(INFINITY) && signbit(c))) __VERIFIER_error();

  if (!(lround(2.3) == 2)) __VERIFIER_error();
  if (!(lround(2.5) == 3)) __VERIFIER_error();
  if (!(lround(2.7) == 3)) __VERIFIER_error();

  if (!(lround(-2.3) == -2)) __VERIFIER_error();
  if (!(lround(-2.5) == -3)) __VERIFIER_error();
  if (!(lround(-2.7) == -3)) __VERIFIER_error();

  if (!(lround(-0.0) == 0)) __VERIFIER_error();
}

