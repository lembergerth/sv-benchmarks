extern void __VERIFIER_error() __attribute__ ((__noreturn__));


int q;

int main() {
    int a, b;
    int *p1 = &a;
    int *p2 = p1;

    q = 0;

    if (p1 == p2) {
        __VERIFIER_error();
        goto ERROR;
    }

    return 0;

    ERROR: __VERIFIER_error();
    return 1;
}
