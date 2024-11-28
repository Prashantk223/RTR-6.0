#include<stdio.h>
#define MY_PI 3.1415926535897932
#define AMC_STRINGS "AstroMediComp RTR"
enum {
	SUNDAY,
	MONDAY, 
	TUESDAY,
	WEDNESDAY,
	THURSDAY,
	FRIDAY,
	SATURDAY
};
enum {
	JANUARY = 1,
	FEBRUARY,
	MARCH,
	APRIL,
	MAY,
	JUNE,
	JULY,
	AUGUST,
	SEPTEMBER,
	OCTOBER,
	NOVEMBER,
	DECEMBER
};

enum {
	ONE,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
};
enum {
	TRUE = 1,
	FALSE
};
int main(void)
{
	const double EPSILON = 0.000001;

	printf("\n\n");
	printf("Local Constant Epsilon = %lf\n\n", EPSILON);
	printf("SUNDAY Is Day Number = %d\n", SUNDAY);
	printf("MONDAY Is Day Number = %d\n", MONDAY);
	printf("TUESDAY Is Day Number = %d\n", TUESDAY);
	printf("WEDNESDAY Is Day Number = %d\n", WEDNESDAY);
	printf("THURSDAY Is Day Number = %d\n", THURSDAY);
	printf("FRIDAY Is Day Number = %d\n", FRIDAY);
	printf("SATURDAY Is Day Number = %d\n", SATURDAY);


	printf("ONE is Enum Number = %d\n", ONE);
	printf("TWO is Enum Number = %d\n", TWO);
	printf("THREE is Enum Number = %d\n", THREE);
	printf("FOUR is Enum Number = %d\n", FOUR);
	printf("FIVE is Enum Number = %d\n", FIVE);
	printf("SIX is Enum Number = %d\n", SIX);
	printf("SEVEN is Enum Number = %d\n", SEVEN);
	printf("EIGHT is Enum Number = %d\n", EIGHT);
	printf("NINE is Enum Number = %d\n", NINE);
	printf("TEN is Enum Number = %d\n", TEN);

	printf("JANUARY Is the Month Number = %d\n", JANUARY);
	printf("FEBRUARY Is the Month Number = %d\n", FEBRUARY);
	printf("MARCH Is the Month Number = %d\n", MARCH);
	printf("APRIL Is the Month Number = %d\n", APRIL);
	printf("MAY Is the Month Number = %d\n", MAY);
	printf("JUNE Is the Month Number = %d\n", JUNE);
	printf("JULY Is the Month Number = %d\n", JULY);
	printf("AUGUST Is the Month Number = %d\n", AUGUST);
	printf("SEPTEMBER Is the Month Number = %d\n", SEPTEMBER);
	printf("OCTOBER Is the Month Number = %d\n", OCTOBER);
	printf("NOVEMBER Is the Month Number = %d\n", NOVEMBER);
	printf("DECEMBER Is the Month Number = %d\n", DECEMBER);

	return 0;
}