extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int __VERIFIER_nondet_int(void);


//VERIFICATION RESULT : TRUE


int last ;
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
     ERROR: __VERIFIER_error();
  }
  return;
}

int main() {
	last = __VERIFIER_nondet_int();
	int a=0,b=0,c=0,st=0;
	while(1) {
		st=1;  
		for(c=0;c<200000;c++)
			if (c==last ) st = 0; 
		if(st==0 && c==last+1){
			a+=3; b+=3;}
		else {	a+=2; b+=2; } 
		if(c==last && st==0) 
			a = a+1;
		if (!(a==b && c==200000)) __VERIFIER_error();
	}
}
