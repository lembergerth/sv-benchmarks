extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int __VERIFIER_nondet_int(void);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }

#define N 100000

int main ( ) {
  int a[N];
  int marker = __VERIFIER_nondet_int();
  int pos = __VERIFIER_nondet_int();
	
	for(int i = 0; i < N; i++) 
	{
	  a[i] = __VERIFIER_nondet_int();
	}
	
  if ( pos >= 0 && pos < N ) {
    a[ pos ] = marker;

    int i = 0;
    while( a[ i ] != marker ) {
      i = i + 1;
    }
   
    if (!(  i <= pos  )) __VERIFIER_error();
  }
  return 0;
}
