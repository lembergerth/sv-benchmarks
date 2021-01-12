extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int __VERIFIER_nondet_int(void);
extern int __VERIFIER_nondet_int();

void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
int main( ) {
  int src[100000];
  int dst[100000];
  int i = 0;
  int j = 0;
  while ( j < 100000 ) {
    src[j] = __VERIFIER_nondet_int();
    j = j + 1;
  }
  while ( i < 100000 && src[i] != 0 ) {
    dst[i] = src[i];
    i = i + 1;
  }
  i = 0;
  while ( i < 100000 && src[i] != 0 ) {
    if (!( dst[i] == src[i] )) __VERIFIER_error();
    i = i + 1;
  }
  return 0;
}
