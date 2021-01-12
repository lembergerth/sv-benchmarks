extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
signed int a[100000];
int main()
{
 int i;
 for(i = 0; i < 100000; i++)
 {
  if(i>=0 && i<=10000)
   a[i] = 10;
  else
  a[i] = 0;
 }
 for(i = 0; i < 100000; i++)
 {
  if (!(a[i] == 10)) __VERIFIER_error();
 }
 return 0;
}
