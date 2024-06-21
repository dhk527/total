#include <stdio.h>

int main(){

	int arry[5];

	arry[2]=0x76;
	arry[3]=0x77;
	arry[4]=0x78;
		
		

	*(arry+2)=0x76;
	*(arry+3)=0x77;
	*(arry+4)=0x78;
	// 추가로 int가 4바이트 씩 움직이지만 우리가 컴파일러에서는 1,2,3,4로 알아서 컴파일링 시켜주니까 우리는 순서대로 짜주면 된다. int면 알아서 4ㅅ씩 증가 시켜주고 char은 1 씩 증가하고 float도 그렇고 double도 그렇고 말이다 ㅇㅇ	
		
// 배열이 아닌 포인터로 봐도 동일
	
	
	char arry_c[5];
	arry_c[2] = 0x91;
	arry_c[3] = 0x92;
	arry_c[4] = 0x93;

	*(arry_c+2) = 0x91;
	*(arry_c+3) = 0x92;
	*(arry_c+4) = 0x93;



	return 1;

}
