#include<stdio.h>
int main(void)
{
	int a = 5;
	int b = 10;

	printf("\n\n");
	printf("A = %d\n", a);
	printf("A = %d\n", a++);
	printf("A = %d\n", a);
	printf("A = %d\n", ++a);

	printf("\n\n");
	printf("A = %d\n", b);
	printf("A = %d\n", b--);
	printf("A = %d\n", b);
	printf("A = %d\n", --b);
	return 0;
}