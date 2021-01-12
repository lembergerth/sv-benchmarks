#include <fenv.h>
#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  fesetround(FE_TONEAREST);
  if (!(lrint(2.3) == 2)) __VERIFIER_error();
  if (!(lrint(2.5) == 2)) __VERIFIER_error();
  if (!(lrint(3.5) == 4)) __VERIFIER_error();
  if (!(lrint(-2.3) == -2)) __VERIFIER_error();
  if (!(lrint(-2.5) == -2)) __VERIFIER_error();
  if (!(lrint(-3.5) == -4)) __VERIFIER_error();

  fesetround(FE_DOWNWARD);		
  if (!(lrint(2.3) == 2)) __VERIFIER_error();
  if (!(lrint(2.5) == 2)) __VERIFIER_error();
  if (!(lrint(3.5) == 3)) __VERIFIER_error();
  if (!(lrint(-2.3) == -3)) __VERIFIER_error();
  if (!(lrint(-2.5) == -3)) __VERIFIER_error();
  if (!(lrint(-3.5) == -4)) __VERIFIER_error();

  if (!(!signbit(lrint(-0.0)))) __VERIFIER_error();
}

