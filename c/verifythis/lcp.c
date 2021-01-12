extern void *calloc(unsigned int nmemb, unsigned int size);
extern void free(void *);
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

extern void __VERIFIER_error(void) __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) {
    if(!cond) __VERIFIER_error();
}

int lcp(int *a, int n, int x, int y) {
    int l = 0;
    while (x+l<n && y+l<n && a[x+l]==a[y+l]) {
        l++;
    }
    return l;
}

void check(int *a, int n, int x, int y, int l) {
    /* is prefix? */
    int i = __VERIFIER_nondet_int();
    __VERIFIER_assume(0 <= i && i < l);
    if (!(a[x+i] == a[y+i])) __VERIFIER_error();

    /* maximal */
    if(x+l<n && y+l<n)
        if (!(a[x+l] != a[y+l])) __VERIFIER_error();
}

int main() {
    int n = __VERIFIER_nondet_int();
    /* 1 << 30 will make sure n * sizeof(int) does not overflow */
    __VERIFIER_assume(n >= 0 && n < (1 << 30));
    int *a = calloc(n, sizeof(int));

    int x = __VERIFIER_nondet_int();
    int y = __VERIFIER_nondet_int();
    __VERIFIER_assume(x >= 0 && y >= 0);
    int l = lcp(a, n, x, y);
    check(a, n, x, y, l);

    free(a);
    return 0;
}
