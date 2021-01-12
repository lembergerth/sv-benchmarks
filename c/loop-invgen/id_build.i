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
  int offset, length, nlen = __VERIFIER_nondet_int();
  int i, j;
  for (i=0; i<nlen; i++) {
    for (j=0; j<8; j++) {
      if (!(0 <= nlen-1-i)) __VERIFIER_error();
      if (!(nlen-1-i < nlen)) __VERIFIER_error();
    }
  }
  return 0;
}
