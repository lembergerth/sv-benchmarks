extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();

int main()
{

	int i,j,k;
	int n=1000;
	int p=500;
	int A [n][n][n];
        int B [n][n][n];
	__VERIFIER_assume(p<n);
        

	i=0;
	j=0;
	k=0;

	while(i < n){
		j=0;
		k=0;
		while(j < n){
			k=0;
			while(k < n){
					B[i][j][k] = __VERIFIER_nondet_int();
					k=k+1;
			}
			j=j+1;
		}
		i=i+1;
    }




	i=0;
	j=0;
	k=0;

	while(i < p){
		j=0;
		k=0;
		while(j < p){
			k=0;
			while(k < p){
					A[i][j][k]=B[i][j][k];
					k=k+1;
			}
			j=j+1;
		}
		i=i+1;
    }
		
		i=p;
		while(i < n){
		j=p;
		while(j < n){
			k=p;
			while(k < n){
					A[i][j][k]=B[i][j][k];
					k=k+1;
			}
			j=j+1;
		}
		i=i+1;
    }




	i=0;
	j=0;
	k=0;
	while(i < n){
		j=0;
		k=0;
		while(j < n){
			k=0;
			while(k < n){
					if (!(A[i][j][k]==B[i][j][k])) __VERIFIER_error();
					k=k+1;
			}
			j=j+1;
		}
		i=i+1;
    }
return 0;
}
