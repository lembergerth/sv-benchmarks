extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();
int main() {
    int i,j,k,n;
    k = __VERIFIER_nondet_int();
    n = __VERIFIER_nondet_int();
    if (!(n < 1000000)) return 0;
    if( k == n) {
    } else {
        goto END;
    }
    for (i=0;i<n;i++) {
        for (j=2*i;j<n;j++) {
            if( __VERIFIER_nondet_int() ) {
                for (k=j;k<n;k++) {
                    if (!(k>=2*i)) __VERIFIER_error();
                }
            }
            else {
                if (!( k >= n )) __VERIFIER_error();
                if (!( k <= n )) __VERIFIER_error();
            }
        }
    }
END:
  return 0;
}
