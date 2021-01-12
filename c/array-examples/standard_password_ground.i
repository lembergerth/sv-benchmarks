extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();

int main( ) {
  int password[ 100000 ];
  int guess[ 100000 ];
  int i;
  int result = 1;
	
	for (i = 0; i < 100000; i++)
	{
	    password[i] = __VERIFIER_nondet_int();
			guess[i] = __VERIFIER_nondet_int();
	}
	
  for ( i = 0 ; i < 100000 ; i++ ) {
    if ( password[ i ] != guess[ i ] ) {
      result = 0;
    }
  }
  if ( result ) {
    int x;
    for ( x = 0 ; x < 100000 ; x++ ) {
      if (!( password[ x ] == guess[ x ] )) __VERIFIER_error();
    }
  }
  return 0;
}
