#include <math.h>

extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if (!(cond)) { ERROR: __VERIFIER_error(); } return; }
 
int main(void)
{
    if (!(!islessequal(2.0, 1.0))) __VERIFIER_error();
    if (!(islessequal(1.0, 2.0))) __VERIFIER_error();
    if (!(islessequal(1.0, 1.0))) __VERIFIER_error();
    if (!(!islessequal(INFINITY, 1.0))) __VERIFIER_error();
    if (!(!islessequal(1.0, NAN))) __VERIFIER_error();
 
    return 0;
}
