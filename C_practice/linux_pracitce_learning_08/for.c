#include <stdio.h>

int zero(){
	return 1;
}

int main(){

	// 예전에는 int a; 선언 해야 하는데 지금은 ㄱㅊ
	for( int a = 0 ; a <10  ;a++){
		// for ( 초기값; 진실 거짓 ; 증감자)
		
		printf("a:나는 행복하다\n 나는 멋지다: %d\n",a);
		

	}

	return 1;
}



// do while 가끔 보는 건데 do는 진짜  while이 다 거짓인데 딱 한번은 실행 해야 하는 것일 때 짠다.
//
//	int main1(){




//	int b ;

//	while(a<b){
//		func();
//		}
//:
//	do{

//		1;

//	} while(0);


//	return 1;

//}

