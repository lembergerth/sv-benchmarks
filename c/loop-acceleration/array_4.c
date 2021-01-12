extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int __VERIFIER_nondet_int(void);

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}

#define N 1024

int main(void) {
  int A[N];
  int i;

  for (i = 0; i < N-1; i++) {
    A[i] = __VERIFIER_nondet_int();
  }

  A[N-1] = 0;

  for (i = 0; A[i] != 0; i++) {
  }

  if (!(i <= N)) __VERIFIER_error();
}
