#include <stdio.h>

int main(){
	double d = 3.4;
	int i=2;
	int di=120;
	int ci=500;

	printf("%d\n", (char)di); // 이런경우는 문제가 없는데

	printf("%d\n", (char)ci); // 크기가 1byte를 넘어가면? 255 넘어간다
		// 또한 " int로 하면 앞에 부호로 1이 넘어가서 - 표시되고 이걸 없애려고 unsigned int 를 해야함
		// "unsigned int"로 하면 1556 -> 244로 바뀐다.
	printf("%u\n", (unsigned char)ci);	

	printf("%f\n" ,d +i);               // 소수점 무시안한다.
 
	printf("%d\n" ,((int)d+i));         // 소수점으로 무시하기      
	printf("%f\n" ,((float)d+i));



}
