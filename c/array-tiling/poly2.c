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
		long long i;
		long long *a = malloc(sizeof(long long)*SIZE);

		for(i=0; i<SIZE; i++)
		{
			a[i] = i*i + 2;
		}

		for(i=0; i<SIZE; i++)
		{
			a[i] = a[i] - 2;
		}

		//assert
		for(i=0; i<SIZE; i++)
		{
			if (!(a[i] == i*i)) __VERIFIER_error();
		}
	}
	return 1;
}
