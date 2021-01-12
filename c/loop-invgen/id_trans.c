// from FreePastry source, file Id.java
  /**
   * Internal method for mapping byte[] -> int[]
   *
   * @param material The input byte[]
   * @return THe int[]
   */
/*
  protected static int[] trans(byte[] material) {
    int[] array = new int[nlen];
    
    for (int j = 0; (j < IdBitLength / 8) && (j < material.length); j++) {
      int k = material[j] & 0xff;
      array[j / 4] |= k << ((j % 4) * 8);
    }
    
    return array;
  }
*/
#include "assert.h"
int main() {
  int idBitLength, material_length, nlen;
  int j, k;

  nlen = __VERIFIER_nondet_int();
  idBitLength = __VERIFIER_nondet_int();
  material_length = __VERIFIER_nondet_int();
    if (!( nlen  ==  idBitLength / 32 )) return 0;
    
  for (j = 0; (j < idBitLength / 8) && (j < material_length); j++) {
    if (!( 0 <= j)) __VERIFIER_error();
    if (!( j < material_length )) __VERIFIER_error();
    if (!( 0 <= j/4 )) __VERIFIER_error();
    if (!( j/4 < nlen)) __VERIFIER_error();
  }
  
  return 0;
}
