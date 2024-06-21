#include <stdio.h>
#define MAX 5

int swap(int b);
int main(){

	int a = 7;
	printf("a : %d\n",a);
	swap(a);
	printf("a : %d\n",a);
	return 1;

}

int swap(int b){

	printf("b : %d\n",b);
	b = 99;
	printf("b : %d\n",b);
	return 1;

}
