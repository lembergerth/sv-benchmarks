extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();

#define N 100000

int main( ) {
  int src[N];
  int dst[N];
  int i = 0; 
	
	for (i = 0; i < N; i++)
	{
	    src[i] = __VERIFIER_nondet_int();
	}
	
	i = 0;
	
  while ( src[i] != 0 ) {
    dst[i] = src[i];
    i = i + 1;
  }
  
  int x;
  for ( x = 0 ; x < i ; x++ ) {
    if (!(  dst[x] == src[x]  )) __VERIFIER_error();
  }
  return 0;
}

