#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }
 
int main(void)
{
    if (!(islessgreater(2.0, 1.0))) __VERIFIER_error();
    if (!(islessgreater(1.0, 2.0))) __VERIFIER_error();
    if (!(!islessgreater(1.0, 1.0))) __VERIFIER_error();
    if (!(islessgreater(INFINITY, 1.0))) __VERIFIER_error();
    if (!(!islessgreater(1.0, NAN))) __VERIFIER_error();
 
    return 0;
}
