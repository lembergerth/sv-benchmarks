extern void __VERIFIER_error() __attribute__ ((__noreturn__));


int f(int *p1, int *p2) {
    return p1 == p2;
}

int q;

int main() {
    int a, b;

    q = 0;

    int *p1 = &a;
    int *p2 = &b;

    a = f(p1, p2);

    if (a) {
        __VERIFIER_error();
    }

    return 0;

    ERROR: __VERIFIER_error();
    return 1;
}
