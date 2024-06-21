
#include <stdio.h>



void swap(int * a, int * b ){
	int c;
	c= *a;
	*a = *b;
	*b = c;

}

int main(){


	int a =3 ;
	int b =4 ;
	
	int * pa = &a;
	int * pb = &b;


	printf("a = %d, b = %d\n", a, b);
		// swap(pa,pb);

	swap(&a,&b);
 
	printf("a = %d, b = %d\n", a, b);

	return 1;

}
