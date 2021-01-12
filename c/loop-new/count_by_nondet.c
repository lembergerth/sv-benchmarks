#include "assert.h"
int main() {
    int i = 0;
    int k = 0;
    while(i < LARGE_INT) {
        int j = __VERIFIER_nondet_int();
        if (!(1 <= j && j < LARGE_INT)) return 0;
        i = i + j;
        k ++;
    }
    if (!(k <= LARGE_INT)) __VERIFIER_error();
    return 0;
}
