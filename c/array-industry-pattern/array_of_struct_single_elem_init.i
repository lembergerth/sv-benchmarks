extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int __VERIFIER_nondet_int(void);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
struct S
{
 int p;
 int n;
};
struct S a[100000];
int main()
{
 int i;
 for (i = 0; i < 100000; i++)
 {
  int q = __VERIFIER_nondet_int();
  struct S s;
	
	s.n = __VERIFIER_nondet_int();
	
  if (s.n == 0)
  {
      s.p =10 ;
  }
  else
  {
    s.p = 20;
  }
  a[i] = s;
 }
 a[3].p = 30;
 a[3].n = 40;
 for (i = 0; i < 100000; i++)
 {
  struct S s1 = a[i];
  if (i != 3 && s1.n == 0)
  {
   if (!(s1.p == 10)) __VERIFIER_error();
  }
 }
 return 0;
}
