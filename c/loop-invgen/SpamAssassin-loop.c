#include "assert.h"

int main()
{
    int len;
    int i;
    int j;

    int bufsize;
    bufsize = __VERIFIER_nondet_int();
    if (bufsize < 0) return 0; // avoid overflows for too negative values
    len = __VERIFIER_nondet_int();
    int limit = bufsize - 4;


    for (i = 0; i < len; ) {
        for (j = 0; i < len && j < limit; ){
            if (i + 1 < len){ 
                if (!(i+1<len)) __VERIFIER_error();
                if (!(0<=i)) __VERIFIER_error();
                if( __VERIFIER_nondet_int() ) goto ELSE;
                if (!(i<len)) __VERIFIER_error();
                if (!(0<=i)) __VERIFIER_error();
                if (!(j<bufsize)) __VERIFIER_error();
                if (!(0<=j)) __VERIFIER_error();

                j++;
                i++;
                if (!(i<len)) __VERIFIER_error();
                if (!(0<=i)) __VERIFIER_error();
                if (!(j<bufsize)) __VERIFIER_error();
                if (!(0<=j)) __VERIFIER_error();

                j++;
                i++;
                if (!(j<bufsize)) __VERIFIER_error();
                if (!(0<=j)) __VERIFIER_error();
                j++;
            } else {
ELSE:
                if (!(i<len)) __VERIFIER_error();
                if (!(0<=i)) __VERIFIER_error();
                if (!(j<bufsize)) __VERIFIER_error();
                if (!(0<=j)) __VERIFIER_error();
                j++;
                i++;
            }
        }
    }
    return 0;
}
