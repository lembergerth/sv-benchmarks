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

  x=0;
  y=4;


  while(1)
    {
      x = x + y;
      y = y +4;
      
      
      if (!(x!=30)) __VERIFIER_error();
    }
    return 0;
}

