#include<stdio.h>
int main(void)
{
	int i, j;
	char ch_01, ch_02;
	int a, result_int;
	float f, result_float;

	int i_explicit;
	float f_explicit;

	printf("\n\n");

	i = 70;
	ch_01 = i;
	printf("I = %d\n", i);
	printf("Character 1 (after ch_01 = i) = %c\n\n", ch_01);

	ch_02 = 'Q';
	j = ch_02;
	printf("Character 2 = %c\n", ch_02);
	printf("Character 1 (after ch_01 = i) = %c\n\n", ch_01);

	//IMPLICIT CONVERSION OF 'int' to float...
	a = 5;
	f = 7.8f;
	result_float = a + f;
	printf("Integer a = %d And Floating-Point Number %f Added Gives Floating-Point Sum = %f\n\n", a, f, result_float);

	a = 5;
	f = 7.8f;
	result_int = a + f;
	printf("Integer a = %d And Floating-Point Number %f Added Gives Integer Sum = %d\n\n", a, f, result_int);

	f_explicit = 30.121995f;
	i_explicit = (int)f_explicit;
	printf("Floating-Point Number which will be Type Casted Explicitly = %f\n", f_explicit);
	printf("Resultant Integer After Explicit Type Casting Of %f = %d\n\n", f_explicit, i_explicit);
	return 0;
}