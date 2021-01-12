extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int(void);
void *malloc(unsigned int size);

int SIZE;

const int MAX = 100000;

int main()
{
	SIZE = __VERIFIER_nondet_int();
	if(SIZE > 1 && SIZE < MAX)
	{
		int i;
		int *a = malloc(sizeof(int)*SIZE);
		int *acopy = malloc(sizeof(int)*SIZE);
		
		for(i = 0; i < SIZE; i++)
		{
		    a[i] = __VERIFIER_nondet_int();
		}

		if(SIZE % 2 != 0) { return 1; }

		__VERIFIER_assume(SIZE % 2 == 0);
		for(i=0; i<SIZE/2; i++)
		{
			acopy[SIZE-i-1] = a[SIZE-i-1];
			acopy[i] = a[i];
		}

		//assert
		for(i=0; i<SIZE; i++)
		{
			if (!(acopy[i] == a[i])) __VERIFIER_error();
		}
	}
	return 1;
}
