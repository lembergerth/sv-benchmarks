extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int(void);

int main( ) {
  int a[100000];
  int min = 0;
  int i = 0;
	
		for(i = 0; i < 100000; i++)
	{
	  a[i] = __VERIFIER_nondet_int();
	}
  
	i = 0;
  while ( i < 100000 ) {
    if ( a[i] < min ) {
      min = a[i];
    }
    i = i + 1;
  }
  int x;
  for ( x = 0 ; x < 100000 ; x++ ) {
    if (!( a[x] >= min )) __VERIFIER_error();
  }
  return 0;
}
