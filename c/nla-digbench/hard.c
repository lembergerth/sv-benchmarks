/*
  hardware integer division program, by Manna
  returns q==A//B
  */

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
    int A, B;
    int r, d, p, q;
    A = __VERIFIER_nondet_int();
    B = __VERIFIER_nondet_int();
    __VERIFIER_assume(B >= 1);

    r = A;
    d = B;
    p = 1;
    q = 0;

    while (1) {
        if (!(q == 0)) __VERIFIER_error();
        if (!(r == A)) __VERIFIER_error();
        if (!(d == B * p)) __VERIFIER_error();
        if (!(r >= d)) break;

        d = 2 * d;
        p = 2 * p;
    }

    while (1) {
        if (!(A == q*B + r)) __VERIFIER_error();
        if (!(d == B*p)) __VERIFIER_error();

        if (!(p != 1)) break;

        d = d / 2;
        p = p / 2;
        if (r >= d) {
            r = r - d;
            q = q + p;
        }
    }

    if (!(A == d*q + r)) __VERIFIER_error();
    if (!(B == d)) __VERIFIER_error();    
    return 0;
}
