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

		for( i = 0; i < SIZE ; i++ )
		{
			if((i+1) < SIZE )
			{
				a[i+1] = i;
			}
			a[i] = i;
		}

		for(i = 0; i < SIZE; i++)
		{
			if (!( a[i] >= i )) __VERIFIER_error();
		}
	}
	return 1;
}
