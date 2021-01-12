#include "assert.h"
int main()
{
  int tagbuf_len;
  int t;
  
  tagbuf_len = __VERIFIER_nondet_int();
  if(tagbuf_len >= 1); else goto END;

  t = 0;

  --tagbuf_len;

  while (1) {
    if (t == tagbuf_len) {
      if (!(0 <= t)) __VERIFIER_error();
      if (!(t <= tagbuf_len)) __VERIFIER_error();
      //      tag[t] = EOS;
      goto END;
    }
    if (__VERIFIER_nondet_int()) {
      break;
    }
     if (!(0 <= t)) __VERIFIER_error();
     if (!(t <= tagbuf_len)) __VERIFIER_error();
    t++;
  }

   if (!(0 <= t)) __VERIFIER_error();
   if (!(t <= tagbuf_len)) __VERIFIER_error();
  t++;

  while (1) {

    if (t == tagbuf_len) { /* Suppose t == tagbuf_len - 1 */
      if (!(0 <= t)) __VERIFIER_error();
      if (!(t <= tagbuf_len)) __VERIFIER_error();
      goto END;
    }

    if (__VERIFIER_nondet_int()) {
      if ( __VERIFIER_nondet_int()) {
	 if (!(0 <= t)) __VERIFIER_error();
	if (!(t <= tagbuf_len)) __VERIFIER_error();
        t++;
        if (t == tagbuf_len) {
	  if (!(0 <= t)) __VERIFIER_error();
	  if (!(t <= tagbuf_len)) __VERIFIER_error();
          goto END;
        }
      }
    }
    else if ( __VERIFIER_nondet_int()) {
      break;
    }

    /* OK */
    if (!(0 <= t)) __VERIFIER_error();
    if (!(t <= tagbuf_len)) __VERIFIER_error();
    t++;                /* Now t == tagbuf_len + 1 
                         * So the bounds check (t == tagbuf_len) will fail */
  }
  /* OK */ 
  if (!(0 <= t)) __VERIFIER_error();
  if (!(t <= tagbuf_len)) __VERIFIER_error();

 END:
  return 0;
}
