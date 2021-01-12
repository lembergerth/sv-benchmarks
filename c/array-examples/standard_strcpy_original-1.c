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
  
  i = 0;
  while ( src[i] != 0 ) {
    if (!(  dst[i] == src[i]  )) __VERIFIER_error();
    i = i + 1;
  }
  return 0;
}

