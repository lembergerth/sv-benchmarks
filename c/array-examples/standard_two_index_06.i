extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();
int main( )
{
  int a[10000];
  int b[10000];
  int i = 0;
  int j = 0;
  while( i < 10000 )
  {
	b[i] = __VERIFIER_nondet_int();
    i = i+1;
  }
  i = 1;
  while( i < 10000 )
  {
 a[j] = b[i];
        i = i+6;
        j = j+1;
  }
  i = 1;
  j = 0;
  while( i < 10000 )
  {
 if (!( a[j] == b[6*j+1] )) __VERIFIER_error();
        i = i+6;
        j = j+1;
  }
  return 0;
}
