#include "assert.h"

int main() {
    int n, sum, i;
    n = __VERIFIER_nondet_int();
    if (!(1 <= n && n <= 1000)) return 0;
    sum = 0;
    for(i = 1; i <= n; i++) {
        sum = sum + i;
    }
    if (!(2*sum == n*(n+1))) __VERIFIER_error();
    return 0;
}
