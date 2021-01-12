#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main(void)
{
  if (!(fdim(4,1) == 3.f)) __VERIFIER_error();
  if (!(fdim(1,4) == 0.f)) __VERIFIER_error();
  if (!(fdim(4,-1) == 5.f)) __VERIFIER_error();
  if (!(fdim(1,-4) == 5.f)) __VERIFIER_error();

  if (!(fdim(1e308, -1e308) == INFINITY)) __VERIFIER_error();
}

