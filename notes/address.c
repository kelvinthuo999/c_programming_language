#include <stdio.h>

int main()
{
	/* variable declaration */
	int x, y, z;

	printf("Declared variables\n");
	printf("Variable	Address		 \t	Value\n");
	printf("x		%p			%x\n", &x, x);
	printf("y		%p			%x\n", &y, y);
	printf("z		%p			%x\n", &z, z);

	/* initialize variables */
	x = 1; 
	y = 2;
	z = 3;

	printf("Initialized variables\n");
	printf("Variable	Address 	\t	Value\n");
	printf("x		%p			%i\n", &x, x);
	printf("y		%p			%i\n", &y, y);
	printf("z		%p			%i\n", &z, z);

	/* pointer declaration */
	int *ptx, *pty, *ptz;
	printf("Pointer declaration\n");
	printf("Variable	Address 	\t	Value\n");
	printf("ptx		%p			%p\n", &ptx, ptx);
	printf("pty		%p			%p\n", &pty, pty);
	printf("ptz		%p			%p\n", &ptz, ptz);

	/* pointer intialization */
	printf("Pointer initialization\n");
	ptx = &x;
	pty = &y;
	ptz = &z;
	
	printf("Variable	Address 	\t	Value\n");
	printf("ptx		%p			%p\n", &ptx, ptx);
	printf("pty		%p			%p\n", &pty, pty);
	printf("ptz		%p			%p\n", &ptz, ptz);
	
	return (0);
}
