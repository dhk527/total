#include <stdio.h>


int main(){
	char name[5]= "Hello";
	printf( " 내 예상은 얘는 5바이트 NULL이 짤린거 맞냐?  %ld\n", sizeof(name));
	char name1[]= "Hello";
	printf( "얘는 NULL '/0' 포함에서 6바이트  %ld\n", sizeof(name1));
return 0;
}

