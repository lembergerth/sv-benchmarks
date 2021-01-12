/* Compute the floor of the square root of a natural number */

extern void __VERIFIER_error() __attribute__((__noreturn__));
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int expression);
void __VERIFIER_assert(int cond) {
    if (!(cond)) {
    ERROR:
        __VERIFIER_error();
    }
    return;
}


int main() {
    int n, a, s, t;
    n = __VERIFIER_nondet_int();

    a = 0;
    s = 1;
    t = 1;

    while (1) {
        if (!(t == 2*a + 1)) __VERIFIER_error();
        if (!(s == (a + 1) * (a + 1))) __VERIFIER_error();
	if (!(t*t - 4*s + 2*t + 1 == 0)) __VERIFIER_error();
        // the above 2 should be equiv to 

        if (!(s <= n))
            break;

        a = a + 1;
        t = t + 2;
        s = s + t;
    }
    
    if (!(t == 2 * a + 1)) __VERIFIER_error();
    if (!(s == (a + 1) * (a + 1))) __VERIFIER_error();
    if (!(t*t - 4*s + 2*t + 1 == 0)) __VERIFIER_error();

    return 0;
}
