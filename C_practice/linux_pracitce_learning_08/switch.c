#include <stdio.h>

int option1(){
	return 5;
}

int main(){

	
	int op = 0;
	int a = 4;

	printf("scanf는 값을 입력받는 함수 입니다. 입력값은? \n");

	scanf("%d", &op);

	switch(op){
			case 1 : 
				a=1 ;
				break ;

			case 2 : 
				a=2;

				break;
			
			case 3 : a=3 ;
				
				break;
			
			case 4 : 
			case 5:
			case 6:
			case 7:
			case 8:
				 a=option1();
			// case 8 까지는 a=1 , 2, 3, 4, 5, 6, 7, 8 까지 순차이고 그 이후에는 default 로 
			// 순차를 나타내는 것이다.
			//
				 break;

			default : a=45 ;
			       	
				break;

	}


		printf("%d 가 나옵니다.",a);
	

}
	

// break 를 안 넣을 수도 있다
//
//switch(op){
//
// case 1;  
// case 2:
// case 3:
// case 4: 
// 	a=200;
// 	break
//
//case 5:
//	a-5
//	break;
//
//
// 	
// 	break를 걸어서 ㅁ=3 무슨 값을 같든 200으로 나오게 만드는 것도 가능
// 	.
// 	 




