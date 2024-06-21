#include <stdio.h>



int swap(int * pa);
int main(){
	
	int a[10] = {0};
	printf("a[3] = %d\n",a[3]);
	printf("a= %u\n", a);
	printf("&a[0] = %u\n", &a[0]);
	printf("&a = %u\n", &a);
	
	swap(a);
	printf("a[3] = %d\n",a[3]);
	return 1;
}

int swap(int * pa){
	*(pa + 3) = 99;
	return 1;
}
