#include <fenv.h>
#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  fesetround(FE_TONEAREST);
  if (!(rint(2.3) == 2.0)) __VERIFIER_error();
  if (!(rint(2.5) == 2.0)) __VERIFIER_error();
  if (!(rint(3.5) == 4.0)) __VERIFIER_error();
  if (!(rint(-2.3) == -2.0)) __VERIFIER_error();
  if (!(rint(-2.5) == -2.0)) __VERIFIER_error();
  if (!(rint(-3.5) == -4.0)) __VERIFIER_error();

  fesetround(FE_DOWNWARD);
  if (!(rint(2.3) == 2.0)) __VERIFIER_error();
  if (!(rint(2.5) == 2.0)) __VERIFIER_error();
  if (!(rint(3.5) == 3.0)) __VERIFIER_error();
  if (!(rint(-2.3) == -3.0)) __VERIFIER_error();
  if (!(rint(-2.5) == -3.0)) __VERIFIER_error();
  if (!(rint(-3.5) == -4.0)) __VERIFIER_error();

  if (!(signbit(rint(-0.0)))) __VERIFIER_error();
  if (!(rint(-INFINITY) == -INFINITY)) __VERIFIER_error();
}

