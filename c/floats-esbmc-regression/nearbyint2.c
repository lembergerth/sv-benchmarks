#include <fenv.h>
#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void) 
{
  fesetround(FE_TONEAREST);
  if (!(nearbyint(2.3) == 2.0)) __VERIFIER_error();
  if (!(nearbyint(2.5) == 2.0)) __VERIFIER_error();
  if (!(nearbyint(3.5) == 4.0)) __VERIFIER_error();
  if (!(nearbyint(-2.3) == -2.0)) __VERIFIER_error();
  if (!(nearbyint(-2.5) == -2.0)) __VERIFIER_error();
  if (!(nearbyint(-3.5) == -4.0)) __VERIFIER_error();

  fesetround(FE_DOWNWARD);
  if (!(nearbyint(2.3) == 2.0)) __VERIFIER_error();
  if (!(nearbyint(2.5) == 2.0)) __VERIFIER_error();
  if (!(nearbyint(3.5) == 3.0)) __VERIFIER_error();
  if (!(nearbyint(-2.3) == -3.0)) __VERIFIER_error();
  if (!(nearbyint(-2.5) == -3.0)) __VERIFIER_error();
  if (!(nearbyint(-3.5) == -4.0)) __VERIFIER_error();

  if (!(signbit(nearbyint(-0.0)))) __VERIFIER_error();
  if (!(nearbyint(-INFINITY) == -INFINITY)) __VERIFIER_error();
}

