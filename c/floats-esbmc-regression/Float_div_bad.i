extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }




int main()
{
  float x = 1.0f;
  float x1 = x/1.6f;

  while(x1 != x)
  {
    x = x1;
    x1 = x/1.6f;
  }

  if (!(x == 0)) __VERIFIER_error();
  return 0;
}
