extern void __VERIFIER_error() __attribute__ ((__noreturn__));
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: __VERIFIER_error(); } }

int main()
{
	int x=0,y=50000,z=0;
	x=0;
	while(x<1000000){
		if(x<50000)
			x++;
		else{
			x++;
			y++;
		}
	}
	while(y>z){
		y--;
		x--;
	}
	if (!(x==z)) __VERIFIER_error();
	return 0;
}
