extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int __VERIFIER_nondet_int(void);

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int main(void) {
  int A[1024];
  int i;

  for (i = 0; i < 1024-1; i++) {
    A[i] = __VERIFIER_nondet_int();
  }

  A[1024 -1] = 0;
  for (i = 0; A[i] != 0; i++) {
  }
  if (!(i <= 1024)) __VERIFIER_error();
}
