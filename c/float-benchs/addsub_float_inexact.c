extern void __VERIFIER_error() __attribute__ ((__noreturn__));
/* Rounding addition and subtraction in single-precision floats. */

void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }

int main()
{
  float x, y, z, r;

  x = 1e8f;
  y = x + 1.f;
  z = x - 1.f;
  r = y - z; 
  if (!(r == 0.f)) __VERIFIER_error();
  return 0;
}
