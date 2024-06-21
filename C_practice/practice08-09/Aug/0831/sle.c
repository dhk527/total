#include <stdio.h>


int static_argc(){

	static int a=3;
		int b=4;
		
		return 0;
	a++;
	b++;

}

int main(){

	while(1){
	static_argc();
	}
	sleep(10000);
	printf ("%d, %d ", a, b );

}



