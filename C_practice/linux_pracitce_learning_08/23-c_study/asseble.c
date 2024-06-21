#include <stdio.h>

int a;
int b;

int sum(int A, int B){	
	
       	int c= A+B+0x33;
	return c;

}


int main(){

	int a, b;
	scanf("%d\n%d",&a,&b ); 
	//sum의 매개변수를 전달하는 전달인자(인수)
	int s = sum(a, b);
	printf("%x\n" , s);


	return 0;
}


