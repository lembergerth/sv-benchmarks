extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();

int main( ){
  int aa [100000];
  int a = 0;
	
	for(int i = 0; i < 100000; i++)
	{
	  aa[i] = __VERIFIER_nondet_int();
	}
	
  while( aa[a] >= 0 ) {
    a++;
  }
  int x;
  for ( x = 0 ; x < a ; x++ ) {
    if (!( aa[x] >= 0 )) __VERIFIER_error();
  }
  return 0;
}
