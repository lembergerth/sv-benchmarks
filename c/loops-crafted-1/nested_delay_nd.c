extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
extern int __VERIFIER_nondet_int(void);
int last ;
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
     ERROR: __VERIFIER_error();
  }
  return;
}


int SIZE = 200000; 

int main()
{
	last = __VERIFIER_nondet_int();
	__VERIFIER_assume(last > 0);
	int a=0,b=0,c=0,st=0,d=0;
	while(1) {
		st=1;  
		for(c=0;c<SIZE;c++) {
			if (c>=last)  { st = 0; }
		}
		if(st==0 && c==last+1){
			a+=3; b+=3;}
		else { a+=2; b+=2; } 
		if(c==last && st==0) { 
			a = a+1;
		}
		else if(st==1 && last<SIZE) { 
			d++;
		}
		if(d == SIZE) {
			a = 0; 
			b = 1;
		}
			
		if (!(a==b && c==SIZE)) __VERIFIER_error();
	}
	return 0;
}
