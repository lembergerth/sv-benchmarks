extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }

int N = 1000000;
int main(){
int i,j=0,a[N];
  unsigned int R=1;
  for(i=0;i<N;i++){
    a[i]=i+1;
    if(i>N/2)
       a[i]=i%R;
  }
  for(i=0;i<N;i++){
    if (a[i]==0) j++;
     if (!(j < N/2)) __VERIFIER_error();
  }
  return 0;
} 

