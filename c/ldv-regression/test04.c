extern void __VERIFIER_error() __attribute__ ((__noreturn__));


int f(int *p1, int *p2) {
    return p1 == p2;
}

int main() {
    int a, b;

    int *p1 = &a;
    int *p2 = &b;

    a = f(p1, p2);

    if (*p1) {
        __VERIFIER_error();
        goto ERROR;
    }

    return 0;

    ERROR: __VERIFIER_error();
    return 1;
}
