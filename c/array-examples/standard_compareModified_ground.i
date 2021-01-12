extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();

int main( ) {
  int a[100000];
  int b[100000];
  int i = 0;
  int c [100000];
  int rv = 1;
	
	for (int j = 0; j < 100000 ; j++ ) {
    a[j] = __VERIFIER_nondet_int();
		b[j] = __VERIFIER_nondet_int();
  }
	
  while ( i < 100000 ) {
    if ( a[i] != b[i] ) {
      rv = 0;
    }
    c[i] = a[i];
    i = i+1;
  }
  int x;
  if ( rv ) {
    for ( x = 0 ; x < 100000 ; x++ ) {
      if (!( a[x] == b[x] )) __VERIFIER_error();
    }
  }
  for ( x = 0 ; x < 100000 ; x++ ) {
    if (!( a[x] == c[x] )) __VERIFIER_error();
  }
  return 0;
}
