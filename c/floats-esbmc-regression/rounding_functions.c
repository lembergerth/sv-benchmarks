#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  if (!(round(2.3) == 2.0)) __VERIFIER_error();
  if (!(round(3.8) == 4.0)) __VERIFIER_error();
  if (!(round(5.5) == 6.0)) __VERIFIER_error();
  if (!(round(-2.3) == -2.0)) __VERIFIER_error();
  if (!(round(-3.8) == -4.0)) __VERIFIER_error();
  if (!(round(-5.5) == -6.0)) __VERIFIER_error();

  if (!(floor(2.3) == 2.0)) __VERIFIER_error();
  if (!(floor(3.8) == 3.0)) __VERIFIER_error();
  if (!(floor(5.5) == 5.0)) __VERIFIER_error();
  if (!(floor(-2.3) == -3.0)) __VERIFIER_error();
  if (!(floor(-3.8) == -4.0)) __VERIFIER_error();
  if (!(floor(-5.5) == -6.0)) __VERIFIER_error();

  if (!(ceil(2.3) == 3.0)) __VERIFIER_error();
  if (!(ceil(3.8) == 4.0)) __VERIFIER_error();
  if (!(ceil(5.5) == 6.0)) __VERIFIER_error();
  if (!(ceil(-2.3) == -2.0)) __VERIFIER_error();
  if (!(ceil(-3.8) == -3.0)) __VERIFIER_error();
  if (!(ceil(-5.5) == -5.0)) __VERIFIER_error();

  if (!(trunc(2.3) == 2.0)) __VERIFIER_error();
  if (!(trunc(3.8) == 3.0)) __VERIFIER_error();
  if (!(trunc(5.5) == 5.0)) __VERIFIER_error();
  if (!(trunc(-2.3) == -2.0)) __VERIFIER_error();
  if (!(trunc(-3.8) == -3.0)) __VERIFIER_error();
  if (!(trunc(-5.5) == -5.0)) __VERIFIER_error();

}

