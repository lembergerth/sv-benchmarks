extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
void *malloc(unsigned int size);
#define SIZE 1000000
#define NULL '\0'
typedef struct
{
	int *n;
}S;
int nondet_pointer();

void init(S a[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		a[i].n = (int *) malloc(sizeof(int));
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
		if(a[i].n != NULL)
		{
			flag = 1;
		}
	}

	
	for(i = 0; i < SIZE; i++)
	{
		if (flag == 0)
		if (!(a[i].n == NULL)) __VERIFIER_error();
	}
	
	
	return 0;
}	
