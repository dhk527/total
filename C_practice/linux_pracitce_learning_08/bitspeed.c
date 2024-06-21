#include <stdio.h>

#define M 1
#define T 2
#define W 4
#define H 8
#define F 16



int main(){
	
	char a;

	printf("오늘의 날짜는? :");
	scanf("%c",&a);

	switch(a){
		case 'M' : a=M;
				break;
		case 'T' : a=T;
				break;
		case 'W' : a=W;
 				break;
		case 'H' : a=H;
				break;
		case 'F' : a=F;	 
				break;
			 
		default : a=0;
			  	break;
	}	
	printf(" 축하합니다. %d 점을 얻었습니다 ", a);
	return 0;
}


