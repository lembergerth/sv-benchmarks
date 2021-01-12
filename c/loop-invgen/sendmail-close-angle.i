extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}
int __VERIFIER_nondet_int();
int main ()
{
  int in;
  int inlen = __VERIFIER_nondet_int();
  int bufferlen = __VERIFIER_nondet_int();
  int buf;
  int buflim;
  if(bufferlen >1);else goto END;
  if(inlen > 0);else goto END;
  if(bufferlen < inlen);else goto END;
  buf = 0;
  in = 0;
  buflim = bufferlen - 2;
  while (__VERIFIER_nondet_int())
  {
    if (buf == buflim)
      break;
    if (!(0<=buf)) __VERIFIER_error();
    if (!(buf<bufferlen)) __VERIFIER_error();
    buf++;
out:
    in++;
    if (!(0<=in)) __VERIFIER_error();
    if (!(in<inlen)) __VERIFIER_error();
  }
    if (!(0<=buf)) __VERIFIER_error();
    if (!(buf<bufferlen)) __VERIFIER_error();
    buf++;
  if (!(0<=buf)) __VERIFIER_error();
  if (!(buf<bufferlen)) __VERIFIER_error();
  buf++;
 END: return 0;
}
