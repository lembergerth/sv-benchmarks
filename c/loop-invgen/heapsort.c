#include "assert.h"

int main( int argc, char *argv[]){
  int n,l,r,i,j;

  n = __VERIFIER_nondet_int();
  if (!(1 <= n && n <= LARGE_INT)) return 0;


  l = n/2 + 1;
  r = n;
  if(l>1) {
    l--;
  } else {
    r--;
  }
  while(r > 1) {
    i = l;
    j = 2*l;
    while(j <= r) {
      if( j < r) {
	if (!(1 <= j)) __VERIFIER_error();
	if (!(j <= n)) __VERIFIER_error();
	if (!(1 <= j+1)) __VERIFIER_error();
	if (!(j+1 <= n)) __VERIFIER_error();
	if( __VERIFIER_nondet_int() )
	  j = j + 1;
      }
      if (!(1 <= j)) __VERIFIER_error();
      if (!(j <= n)) __VERIFIER_error();
      if( __VERIFIER_nondet_int() ) { 
      	break;
      }
      if (!(1 <= i)) __VERIFIER_error();
      if (!(i <= n)) __VERIFIER_error();
      if (!(1 <= j)) __VERIFIER_error();
      if (!(j <= n)) __VERIFIER_error();
      i = j;
      j = 2*j;
    }
    if(l > 1) {
      if (!(1 <= l)) __VERIFIER_error();
      if (!(l <= n)) __VERIFIER_error();
      l--;
    } else {
      if (!(1 <= r)) __VERIFIER_error();
      if (!(r <= n)) __VERIFIER_error();
      r--;
    }
  }
  return 0;
}

