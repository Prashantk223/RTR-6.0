#include<stdio.h>
int main(void)
{
	int a, b, c;
	int result;

	printf("\n\n");
	printf("Enter First Integer");
	scanf("%d", &a);

	printf("Enter Second Integer");
	scanf("%d", &b);

	printf("Enter Third Integer");
	scanf("%d", &c);

	printf("\n\n");
	printf("If Answer = 0, It Is 'FALSE' .\n");
	printf("If Answer = 1, It Is 'TRUE' .\n\n");

	result = (a <= b) && (b != c);
	printf(" LOGICAL AND (&&) : Answer is TRUE(1) If AND Only If BOTH Conditions Are True. The Answer is False(0), If Any one Or Both Conditions Are False. \n\n");
	printf(" A = %d Is Less Than Or Equal To B = %d AND B = %d Is NOT Eqal To C = %d     \t Answer = %d\n\n", a, b, b, c, result);

	result = (b >= a) || ( a == c);
	printf(" LOGICAL OR (||) : Answer is FALSE(0) If and Only If BOTH Conditions Are False. The Answer Is TRUE(1), If Any One Or Both Conditions Are TRUE. \n\n");
	printf(" Either B = %d Is Greater Than Or Equal To A = %d Is Euqal To C = %d \t Answer = %d\n\n",  b, a, a, c, result);

	result = !a;
	printf(" A = %d And Using Logical NOT(!) Operator on A Gives Result = %d\n\n", a, result);

	result = !b;
	printf(" B = %d And Using Logical NOT(!) Operator on B Gives Result = %d\n\n", b, result);

	result = !c;
	printf(" C = %d And Using Logical NOT(!) Operator on C Gives Result = %d\n\n", c, result);

	result = (!(a <= b) && !(b != c));
	printf("Using Logical NOT(!) on (a<=b) And Also (b !-= c) And then ANDing Them Afterwards Gives Result = %d\n", result);

	result = !((b >= a) || (a == c));
	printf("Using Logical NOT(!) on Entire Logical Expression (b >= a) || (a == c) Gives Result = %d\n", result);
	printf("\n\n");
	return 0;
}