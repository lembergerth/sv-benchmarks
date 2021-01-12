extern void __VERIFIER_error() __attribute__ ((__noreturn__));

struct dummy {
  int a, b;
} global = {0, 1};

void assign(int *pa, int *pb)
{
  *pa = *pb;
}

int main()
{
  struct dummy *pd = &global;

  assign(&pd->a, &pd->b);

  if (pd->a != global.b) {
    __VERIFIER_error();
    goto ERROR;
  }

  return 0;

  ERROR: __VERIFIER_error();
  return 1;
}
