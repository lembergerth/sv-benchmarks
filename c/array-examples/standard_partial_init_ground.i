extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();

int main ( ) {
  int A[ 100000 ];
  int B[ 100000 ];
  int C[ 100000 ];
  int i;
  int j = 0;
	
  for (i = 0; i < 100000 ; i++) {
    A[i] = __VERIFIER_nondet_int();
    B[i] = __VERIFIER_nondet_int();
  }	
	
  for (i = 0; i < 100000 ; i++) {
    if ( A[i] == B[i] ) {
      C[j] = i;
      j = j + 1;
    }
  }
  int x;
  for ( x = 0 ; x < j ; x++ ) {
    if (!( C[x] <= x + i - j )) __VERIFIER_error();
  }
  for ( x = 0 ; x < j ; x++ ) {
    if (!( C[x] >= x )) __VERIFIER_error();
  }
  return 0;
}
