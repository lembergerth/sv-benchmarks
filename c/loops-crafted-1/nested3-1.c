extern void __VERIFIER_error() __attribute__ ((__noreturn__));

void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: __VERIFIER_error();
  }
  return;
}

int main()
{
  unsigned int x = 0;
  unsigned int y = 0;
  unsigned int z = 0;
  unsigned int w = 0;

  while (x < 0x0fffffff) {
    y = 0;

    while (y < 0x0fffffff) {
   	z =0;
	while (z <0x0fffffff) {
	  z++;
	}
    	if (!(z % 4)) __VERIFIER_error();
	y++;
    }
    if (!(y % 2)) __VERIFIER_error();

    x++;
  }
  if (!(x % 2)) __VERIFIER_error();
  return 0;

}
