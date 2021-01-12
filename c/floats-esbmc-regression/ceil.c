#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  if (!(ceil(2.4) == 3.0)) __VERIFIER_error();
  if (!(ceil(-2.4) == -2.0)) __VERIFIER_error();

  double c = ceil(-0.0);
  if (!((c == -0.0) && signbit(c))) __VERIFIER_error();

  c = ceil(-INFINITY);
  if (!(isinf(INFINITY) && signbit(c))) __VERIFIER_error();
}

