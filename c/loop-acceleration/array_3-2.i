extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
extern int __VERIFIER_nondet_int(void);
int main(void) {
  int A[1024];
  int i;
  for (i = 0; i < 1024; i++) {
    A[i] = __VERIFIER_nondet_int();
  }
  for (i = 0; i < 1024 && A[i] != 0; i++) {
  }
  if (!(i <= 1024 / 2)) __VERIFIER_error();
}
