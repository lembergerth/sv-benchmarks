extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int();
#define SIZE 1000000
typedef struct
{
	int n;
}S;

void init(S a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		a[i].n = __VERIFIER_nondet_int();
	}
}

int main()
{
	S a[SIZE];
	int i;
	int flag;
	flag = 0;

	init(a, SIZE);

	for(i = 0; i < SIZE; i++)
	{
		if(a[i].n != 0)
		{
			flag = 1;
		}
	}

	
	for(i = 0; i < SIZE; i++)
	{
		if (flag == 0)
		if (!(a[i].n == 0 )) __VERIFIER_error();
	}
	
	
	return 0;
}	
