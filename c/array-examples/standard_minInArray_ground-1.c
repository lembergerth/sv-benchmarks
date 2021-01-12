extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int(void);

#define N 100000

int main( ) {
  int a[N];
  int min = 0;
	
	for(int j = 0; j < N; j++)
	{
	  a[j] = __VERIFIER_nondet_int();
	}
	
  int i = 0;
	
  while ( i < N ) {
    if ( a[i] < min ) {
      min = a[i];
    }
    i = i + 1;
  }

  int x;
  for ( x = 0 ; x < N ; x++ ) {
    if (!(  a[x] > min  )) __VERIFIER_error();
  }
  return 0;
}
