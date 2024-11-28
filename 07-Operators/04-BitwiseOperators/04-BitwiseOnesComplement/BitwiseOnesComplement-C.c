#include<stdio.h>
int main(void)
{
	void PrimaryBinaryFormOfNumber(unsigned int);

	unsigned int a;
	unsigned int result;

	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &a);

	printf("\n\n\n\n");
	result = ~a;
	printf("Bitwise COMPLEMENTING of \nA = %d (Decimal) gives result %d(Decimal). \n\n", a, result);
	PrimaryBinaryFormOfNumber(a);
	PrimaryBinaryFormOfNumber(result);
	return 0;
}

void PrimaryBinaryFormOfNumber(unsigned int dcimal_number)
{
	unsigned int quotient, remainder;
	unsigned int num;
	unsigned int binary_array[8];
	int i;

	for (i = 0; i < 8; i++)
		binary_array[i] = 0;

	printf("The Binary Form of the Integer %d Is\t=\t", dcimal_number);
	num = dcimal_number;
	i = 7;
	while (num != 0)
	{
		quotient = num / 2;
		remainder = num % 2;
		binary_array[i] = remainder;
		num = quotient;
		i--;
	}
	for (i = 0; i < 8; i++)
		printf("%u", binary_array[i]);

	printf("\n\n");
}