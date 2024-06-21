#include <stdio.h>
int main(){
	char a = 32;

	char printval= 0;
	
	printval = a % ( a<<7);
	printval = printval >>7;
	printf("%d", a& printval );

	printval = a & (1 <<6);
	printval = printval>> 6;
	printf("%d", printval);

	printval = a & (1 <<0);
	printval = printval >> 0;
	printf("%d", printval);






printf("\n");
}
// for 문을 알면 7칸 밀고 7칸 다시 땡기고 하는거 안해도되긴 하지만 이런 식으로도 움직일 수도 있다.


