#include "assert.h"

int main()
{
    int scheme;
    int urilen,tokenlen;
    int cp,c;
    urilen = __VERIFIER_nondet_int();
    tokenlen = __VERIFIER_nondet_int();
    scheme = __VERIFIER_nondet_int();
    if (!(urilen <= LARGE_INT && urilen >= -LARGE_INT)) return 0;
    if (!(tokenlen <= LARGE_INT && tokenlen >= -LARGE_INT)) return 0;
    if (!(scheme <= LARGE_INT && scheme >= -LARGE_INT)) return 0;

    if(urilen>0); else goto END;
    if(tokenlen>0); else goto END;
    if(scheme >= 0 );else goto END;
    if (scheme == 0 || (urilen-1 < scheme)) {
        goto END;
    }

    cp = scheme;

    if (!(cp-1 < urilen)) __VERIFIER_error();
    if (!(0 <= cp-1)) __VERIFIER_error();

    if (__VERIFIER_nondet_int()) {
        if (!(cp < urilen)) __VERIFIER_error();
        if (!(0 <= cp)) __VERIFIER_error();
        while ( cp != urilen-1) {
            if(__VERIFIER_nondet_int()) break;
            if (!(cp < urilen)) __VERIFIER_error();
            if (!(0 <= cp)) __VERIFIER_error();
            ++cp;
        }
        if (!(cp < urilen)) __VERIFIER_error();
        if (!( 0 <= cp )) __VERIFIER_error();
        if (cp == urilen-1) goto END;
        if (!(cp+1 < urilen)) __VERIFIER_error();
        if (!( 0 <= cp+1 )) __VERIFIER_error();
        if (cp+1 == urilen-1) goto END;
        ++cp;

        scheme = cp;

        if (__VERIFIER_nondet_int()) {
            c = 0;
            if (!(cp < urilen)) __VERIFIER_error();
            if (!(0<=cp)) __VERIFIER_error();
            while ( cp != urilen-1
                    && c < tokenlen - 1) {
                if (!(cp < urilen)) __VERIFIER_error();
                if (!(0<=cp)) __VERIFIER_error();
                if (__VERIFIER_nondet_int()) {
                    ++c;
                    if (!(c < tokenlen)) __VERIFIER_error();
                    if (!(0<=c)) __VERIFIER_error();
                    if (!(cp < urilen)) __VERIFIER_error();
                    if (!(0<=cp)) __VERIFIER_error();
                }
                ++cp;
            }
            goto END;
        }
    }

END:
    return 0;
}
