extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }




int main()
{
  double x = 1.0;
  double x1 = x/2.5;

  while(x1 != x)
  {
    x = x1;
    x1 = x/2.5;
  }

  if (!(x == 0)) __VERIFIER_error();
  return 0;
}
