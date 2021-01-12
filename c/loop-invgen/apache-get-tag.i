extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();
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
    if (t == tagbuf_len) {
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
    if (!(0 <= t)) __VERIFIER_error();
    if (!(t <= tagbuf_len)) __VERIFIER_error();
    t++;
  }
  if (!(0 <= t)) __VERIFIER_error();
  if (!(t <= tagbuf_len)) __VERIFIER_error();
 END:
  return 0;
}
