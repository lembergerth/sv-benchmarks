extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();

int main()
{

	int i,j;
	int m=1000,n=1500;
	int A [m][n];
	int C=__VERIFIER_nondet_int();

	i=0;
	j=0;
	while(i < m){
		j=0;
		while(j < n){

                        A[i][j]=C;
			j=j+1;
		}
		i=i+1;
    }


	i=0;
	j=0;
	while(i < m){
		j=0;
		while(j < n){

                        if (!(A[i][j]==C)) __VERIFIER_error();
			j=j+1;
		}
		i=i+1;
    }



return 0;
}
