#include<stdio.h>
int main(void)
{
		int a, b, x;
		printf("\n\n");

		printf("Enter A Number :");
		scanf("%d", &a);

		printf("\n\n");
		printf("Enter Another Number :");
		scanf("%d", &b);

		printf("\n\n");

		x = a;
		a += b;
		printf("Addition of A = %d And B = %d Gives %d.\n", x, b, a);
	
		x = a;
		a -= b;
		printf("Sunstraction of A = %d And B = %d Gives %d.\n", x, b, a);

		x = a;
		a *= b;
		printf("Multiplication of A = %d And B = %d Gives %d.\n", x, b, a);

		x = a;
		a /= b;
		printf("Division of A = %d And B = %d Gives %d.\n", x, b, a);

		x = a;
		a %= b;
		printf("Division of A = %d And B = %d Gives %d.\n", x, b, a);

	printf("\n\n");
	return 0;
}