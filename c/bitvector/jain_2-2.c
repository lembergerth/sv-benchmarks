extern void __VERIFIER_error() __attribute__ ((__noreturn__));

extern int __VERIFIER_nondet_int(void);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int main()
{
  int x,y;

  x = 1;
  y = 1;

  while(1)
    {
      x = x +2*__VERIFIER_nondet_int();
      y = y +2*__VERIFIER_nondet_int();


      if (!(x+y!=1)) __VERIFIER_error();
    }
    return 0;
}

