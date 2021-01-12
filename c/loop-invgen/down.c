#include "assert.h"

int main() {
  int n;
  int k = 0;
  int i = 0;
  n = __VERIFIER_nondet_int();
  while( i < n ) {
      i++;
      k++;
  }
  int j = n;
  while( j > 0 ) {
      if (!(k > 0)) __VERIFIER_error();
      j--;
      k--;
  }
  return 0;
}
