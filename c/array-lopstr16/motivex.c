extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern short __VERIFIER_nondet_short(void);
#define SIZE 1000000
struct S {
	unsigned short p;		  
	unsigned short q;		 		  
} a[10000];

int main()
{
	unsigned char k;
	
	int i;
	for (i  = 0; i < SIZE ; i++)
	{
		a[i].p = i; 
		a[i].q = i ;
	}

	for (i = 0; i < SIZE; i++)
	{
		if (__VERIFIER_nondet_short() )
		{
			k = __VERIFIER_nondet_short();
			a[i].p = k;
			a[i].q = k * k ;
		}
	}

	for (i = 0; i < SIZE; i++)
	{
		if (!(a[i].p == a[i].q || a[i].q == a[i].p * a[i].p)) __VERIFIER_error();
	}

	return 0;
}

