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
	int A [n][n];
	int max;
        
        
	i=0;
	j=0;
	while(i < m){
		j=0;
		while(j < n){
					A[i][j]=__VERIFIER_nondet_int();

			j=j+1;
		}
		i=i+1;
    }


	i=0;
	j=0;
        max=A [0][0];
	while(i < n){
		j=0;
		while(j < n){
			if(A[i][j]>max){
                            max=A[i][j];
                        }
			j=j+1;
		}
		i=i+1;
    }




	i=0;
	j=0;
	while(i < n){
		j=0;
		while(j < n){
                    
			if (!(A[i][j]<=max)) __VERIFIER_error();
			j=j+1;
		}
		i=i+1;
    }
return 0;
}
