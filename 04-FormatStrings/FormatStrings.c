#include<stdio.h>

int main(void)
{
	int a = 13;
	printf("Integer decimal valueof 'a' = %d\n", a);
	printf("Integer octal valueof 'a' = %o\n", a);
	printf("Integer Hexadecimal  value of 'a' (Hexadecimal letters in lower case) = %x\n", a);
	printf("Integer Hexadecimal  value of 'a' (Hexadecimal letters in Upper case) = %X\n\n", a);

	char ch = 'A';
	printf("Character ch = %c\n", ch);
	char str[] = "AstroMedicomp's Real Time Rendering Batch";
	printf("String str = %s\n\n", str);

	long num = 30123456L;
	printf("Long Integer %ld\n\n", num);

	unsigned int b = 7;
	printf("Unsigned Integer 'b' = %u\n\n", b);

	float f_num = 3012.1995f;
	printf("Floating Number With Just %%f 'f_num' = %f\n", f_num);
	printf("Floating Number With %%4.2f 'f_num' = %4.2f\n", f_num);
	printf("Floating Number With %%6.5f 'f_num' = %f6.5\n", f_num);

	double d_pi = 3.14159265358979323846;
	printf("Double Precision Floating Number Without Exponential = %g\n", d_pi);
	printf("Double Precision Floating Number With Exponential(Lower Case) = %e\n", d_pi);
	printf("Double Precision Floating Number With Exponential(Upper Case) = %E\n", d_pi);
	printf("Double Hexadecimal value of 'd_pi'(Hexadecimal Letter Lowers Case) = %a\n", d_pi);
	printf("Double Hexadecimal value of 'd_pi'(Hexadecimal Upper Lowers Case) = %A\n", d_pi);
	return 0;
}