extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int SIZE = 20000001;
int __VERIFIER_nondet_int();
int main() {
  unsigned int n=0,i=0,k=0,j=0,l=0;
  unsigned int v1=0, v2=0, v3=0, v4=0, v5=0;
  n = __VERIFIER_nondet_int();
  if (!(n <= SIZE)) return 0;
  while( l < n ) {
	
	  if(!(l%8))
	    v5 = v5 + 1;
	  else if(!(l%7))
	    v1 = v1 + 1;
	  else if(!(l%6))
	    v2 = v2 + 1;
	  else if(!(l%5))
	    v3 = v3 + 1;
	  else if(!(l%4))
	    v4 = v4 + 1;
	  else if(!(l%3))
	    i = i + 1;
	  else if(!(l%2)) 
		  j = j+1;
	  else 
	    k = k+1;
    l = l+1;
    if (!((i+j+k+v1+v2+v3+v4+v5) == l)) __VERIFIER_error();
  }
  return 0;
}

