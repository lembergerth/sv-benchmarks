#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  if (!(fmin(2,1) == 1.f)) __VERIFIER_error();
  if (!(fmin(-INFINITY,0) == -(1./0.0))) __VERIFIER_error();
  if (!(fmin(NAN,-1) == -1.f)) __VERIFIER_error();
  if (!(!(fmin(NAN,NAN) == NAN))) __VERIFIER_error();
}

