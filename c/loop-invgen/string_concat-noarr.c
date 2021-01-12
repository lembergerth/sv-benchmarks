#include "assert.h"

int main(void) {
  int i, j;

 L0:
  i = 0;
 L1:
  while( __VERIFIER_nondet_int() && i < LARGE_INT){

    i++;
  }
  if(i >= 100) STUCK: goto STUCK; //  assume( i < 100 );
  j = 0;
 L2:
  while( __VERIFIER_nondet_int() && i < LARGE_INT ){
    i++;
    j++;
  }
  if(j >= 100) goto STUCK; // assume( j < 100 );
  if (!( i < 200 )) __VERIFIER_error(); /* prove we don't overflow z */
  return 0;
}
