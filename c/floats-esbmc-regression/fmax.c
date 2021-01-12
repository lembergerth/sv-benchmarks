#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  if (!(fmax(2,1) == 2.f)) __VERIFIER_error();
  if (!(fmax(-INFINITY,0) == 0)) __VERIFIER_error();
  if (!(fmax(NAN,-1) == -1.f)) __VERIFIER_error();
  if (!(!(fmax(NAN,NAN) == NAN))) __VERIFIER_error();
}

