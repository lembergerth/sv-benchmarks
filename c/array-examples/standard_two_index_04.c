extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();

#define size 100000
int main( )
{
  int a[size];
  int b[size];
  int i = 0;
  int j = 0;
  while( i < size )
  {
	b[i] = __VERIFIER_nondet_int();
    i = i+1;
  }

  i = 1;
  while( i < size )
  {
	a[j] = b[i];
        i = i+4;
        j = j+1;
  }

  i = 1;
  j = 0;
  while( i < size )
  {
	if (!( a[j] == b[4*j+1] )) __VERIFIER_error();
        i = i+4;
        j = j+1;
  }
  return 0;
}
