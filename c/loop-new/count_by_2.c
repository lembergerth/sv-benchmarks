#include "assert.h"

int main() {
    int i;
    for (i = 0; i < LARGE_INT; i += 2) ;
    if (!(i == LARGE_INT)) __VERIFIER_error();
    return 0;
}
