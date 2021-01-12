#include "assert.h"

int main() {
    int i;
    int k;
    k = __VERIFIER_nondet_int();
    if (!(0 <= k && k <= 10)) return 0;
    for (i = 0; i < LARGE_INT*k; i += k) ;
    if (!(i == LARGE_INT*k)) __VERIFIER_error();
    return 0;
}
