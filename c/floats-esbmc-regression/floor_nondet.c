#include <math.h>
#include <fenv.h>

extern void __VERIFIER_assume(int);
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

double __VERIFIER_nondet_double();

int main(void)
{
  double d = __VERIFIER_nondet_double();
  __VERIFIER_assume(!isinf(d));
  __VERIFIER_assume(!isnan(d));

  int save_round = fegetround();
  fesetround(FE_DOWNWARD);
  double result = rint(d);
  fesetround(save_round);

  if (!(floor(d) == result)) __VERIFIER_error();

  double d1 = __VERIFIER_nondet_double();
  __VERIFIER_assume(isinf(d1));
  if (!(isinf(floor(d1)))) __VERIFIER_error();

  double d2 = __VERIFIER_nondet_double();
  __VERIFIER_assume(isinf(d2));
  if (!(isinf(floor(d2)))) __VERIFIER_error();

  return 0;
}

