extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }

#define SIZE 100000
struct _S
{
	int n;
};
typedef struct _S S;

S a[SIZE];

int main()
{
	int i,x;
	int y = 100;
	for(i = 0; i < SIZE; i++)
	{
		x = y;
		a[i].n = y;
		y++;
	}


	for(i = 0; i < SIZE; i++)
	{
		if (!(a[i].n >= 100)) __VERIFIER_error();
		
	}

	return 0;
}


