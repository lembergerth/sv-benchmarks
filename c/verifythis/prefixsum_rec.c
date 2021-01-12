extern void *calloc(unsigned int nmemb, unsigned int size);
extern void free(void *);
extern int __VERIFIER_nondet_int(void);
extern void __VERIFIER_assume(int);

extern void __VERIFIER_error(void) __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) {
    if(!cond) __VERIFIER_error();
}

void upsweep(int *a, int left, int right) {
    if (right > left+1) {
        int space = right - left;
        upsweep(a,left-space/2,left);
        upsweep(a,right-space/2,right);
    }
    a[right] = a[left]+a[right];
}

void downsweep(int *a, int left, int right) {
    int tmp = a[right];
    a[right] = a[right] + a[left];
    a[left] = tmp;
    if (right > left+1) {
        int space = right - left;
        downsweep(a,left-space/2,left);
        downsweep(a,right-space/2,right);
    }
}

int is_pow2 (unsigned int x)
{
     while (((x % 2) == 0) && x > 1)
         x /= 2;
     return (x == 1);
}

void check(int *a0, int *a, int n) {
    int i, sum = 0;
    for(i=0; i<n; i++) {
        if (!(sum == a[i])) __VERIFIER_error();
        sum += a0[i];
    }
}

int main() {
    int n = __VERIFIER_nondet_int();
    /* 1 << 30 will make sure n * sizeof(int) does not overflow */
    __VERIFIER_assume(n > 1 && n < (1 << 30));
    __VERIFIER_assume(is_pow2(n));
    int *a = calloc(n, sizeof(int));

    int *a0 = calloc(n, sizeof(int));
    int i;
    for(i=0; i<n; i++)
        a0[i] = a[i];

    upsweep(a, n/2-1, n-1);
    a[n-1] = 0;
    downsweep(a, n/2-1, n-1);
    check(a0, a, n);

    free(a);
    free(a0);
    return 0;
}
