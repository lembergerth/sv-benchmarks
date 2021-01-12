#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }
 
int main(void)
{
    if (!(isunordered(NAN, 1.0))) __VERIFIER_error();
    if (!(isunordered(1.0, NAN))) __VERIFIER_error();
    if (!(isunordered(NAN, NAN))) __VERIFIER_error();
    if (!(!isunordered(1.0, 0.0))) __VERIFIER_error();
 
    return 0;
}
