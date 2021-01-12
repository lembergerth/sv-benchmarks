extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}

int x=0;

void eval(void) 
{
  while (1) {
      x=0;
      break;
  }
  return;
}


int main() {

  while(1)
  {
    eval();
    if (!(x==0)) __VERIFIER_error();    
  }

  if (!(x!=0)) __VERIFIER_error();

  return 0;
}
