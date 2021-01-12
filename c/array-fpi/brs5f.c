/*
 * Benchmarks contributed by Divyesh Unadkat[1,2], Supratik Chakraborty[1], Ashutosh Gupta[1]
 * [1] Indian Institute of Technology Bombay, Mumbai
 * [2] TCS Innovation labs, Pune
 *
 */

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
extern int __VERIFIER_nondet_int(void);
void* malloc(unsigned int size);

int N;

int main()
{
	N = __VERIFIER_nondet_int();
	if(N <= 0) return 1;
	__VERIFIER_assume(N <= 2147483647/sizeof(int));

	int i;
	long long sum[1];
	int *a = malloc(sizeof(int)*N);

	for(i=0; i<N; i++)
	{
		if(i%5==0) {
			a[i] = 5;
		} else {
			a[i] = 5;
		}
	}

	for(i=0; i<N; i++)
	{
		if(i==0) {
			sum[0] = N + 5;
		} else {
			sum[0] = sum[0] + a[i];
		}
	}
	if (!(sum[0] <= 5*N)) __VERIFIER_error();
	return 1;
}
