#include<stdio.h>
int main(void)
{
	void PrimaryBinaryFormOfNumber(unsigned int);

	unsigned int a;
	unsigned int num_bits;
	unsigned int result;

	printf("\n\n");
	printf("Enter An Integer = ");
	scanf("%u", &a);

	printf("\n\n");
	printf("How Many Bits Do You Want To Shift A = %d To The Right? ", a);
	scanf("%u", &num_bits);

	printf("\n\n\n\n");
	result = a  >> num_bits;
	printf("Bitwise RIGHT-SHIFTing of \nA = %d By %d Bits \nGives The Result = %d(decimal). \n\n", a, num_bits, result);
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