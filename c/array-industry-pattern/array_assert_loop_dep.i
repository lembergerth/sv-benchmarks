extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
int main()
{
 int i;
 int a[100000];
 for(i = 0; i < 100000; i++)
 {
  a[i] = 10;
 }
 for(i = 0; i < 100000; i++)
 {
  if (!(a[i] == 10 )) __VERIFIER_error();
  if(i+1 != 15000)
   a[i+1] = 20;
 }
 return 0;
}
