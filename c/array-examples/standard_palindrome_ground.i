extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();
int main( ) {
  int A[100000];
  int i;
	for (i = 0; i < 100000 ; i++ ) {
    A[i] = __VERIFIER_nondet_int();
  }
  for (i = 0; i < 100000/2 ; i++ ) {
    A[i] = A[100000 -i-1];
  }
  int x;
  for ( x = 0 ; x < 100000/2 ; x++ ) {
    if (!( A[x] == A[100000 - x - 1] )) __VERIFIER_error();
  }
  return 0;
}
