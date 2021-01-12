typedef unsigned int size_t;
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }
int *a[100000];
int i;
int main ()
{
 for(i = 0; i < 100000; i++)
 {
  a[i] = 0;
 }
 for(i = 0; i < 100000 / 2; i++)
 {
  a[i] = malloc(sizeof(int)) ;
 }
 for(i = 0; i < 100000 / 2; i++)
 {
  if (!(a[i] != 0)) __VERIFIER_error();
 }
return 0;
}
