
extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int SIZE = 20000001;
unsigned int __VERIFIER_nondet_int();
int main() {
  unsigned int n,i,k,j;
  n = __VERIFIER_nondet_int();
  if (!(n <= SIZE)) return 0;
  i = j = k = 0;
  while( i < n ) {
    i = i + 3;
    if(i%2)
	    j = j+3;
    else
	    k = k+3;
    if(n>0)
	  if (!( (i/2<=j) )) __VERIFIER_error();
  }
  return 0;
}

