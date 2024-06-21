#include <stdio.h>

int main(){
	//c 언어에서 진실과 거짓을 구분하는 것은
	// 진실은 ~0 이고 거짓은 0이다. c언어의 다다.
	
	int a = 0;


	// if 문에 ()안에 0이 들어갔으면 false ~0이면 1로 나온다.
	// true 면 !할시 false가 되는 언어도 있음 JAVA

	if (0){


		a=1;

		printf("참입니다.");
		
	}
	else if(3){
		a=5;
		printf("참입니다.");
	

	}



	else{

		a= 3;

		printf("거짓입니다.");
		// if() 를 넣어도 된다 중복 조건문 가능
	
	
	}
				

	printf( "그 이유는 %d 이기 때문입니다 ",a);




}

	

