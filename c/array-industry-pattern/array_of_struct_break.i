extern void __VERIFIER_error() __attribute__ ((__noreturn__));
extern int __VERIFIER_nondet_int(void);
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
struct S
{
 int n;
};
struct S s[100000];
int main()
{
 int i;
 int c;
 c = __VERIFIER_nondet_int();
 for(i = 0; i < 100000; i++)
 {
  if(c > 5)
   break;
  s[i].n = 10;
 }
 for(i = 0; i < 100000; i++)
 {
  if(c <= 5)
   if (!(s[i].n == 10)) __VERIFIER_error();
 }
 return 0;
}
