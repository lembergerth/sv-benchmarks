extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();

#define N 100000

int main( ) {
  int a[ N ];
  int i = 0;
  int x;
  int y;
	
	for(int i = 0; i < 100000; i++) 
	{
	    a[i] = __VERIFIER_nondet_int();
	}
	
	i = 0;
  while ( i < N ) {
    int k = i + 1;
    int s = i;
    while ( k < N ) {
      if ( a[k] < a[s] ) {
        s = k;
      }
      k = k+1;
    }
    if ( s != i ) {
      int tmp = a[s];
      a[s] = a[i];
      a[i] = tmp;
    }
    
    for ( x = 0 ; x < i ; x++ ) {
      for ( y = x + 1 ; y < i ; y++ ) {
        if (!(  a[x] <= a[y]  )) __VERIFIER_error();
      }
    }
    for ( x = 0 ; x < N ; x++ ) {
      if (!(  a[x] >= a[i]  )) __VERIFIER_error();
    }
    
    i = i+1;
  }
    
  for ( x = 0 ; x < N ; x++ ) {
    for ( y = x + 1 ; y < N ; y++ ) {
      if (!(  a[x] <= a[y]  )) __VERIFIER_error();
    }
  }
  return 0;
}
