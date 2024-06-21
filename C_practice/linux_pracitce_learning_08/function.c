#include <stdio.h>

// "함수란?" 구멍을 선어나는 것이다 반환하는 것은 최대하나 (나오는 것은 하나 먹는건 여러개)
//

int sum(int asdf , int );   //"sum(목구멍)" int d, int e, char f,. 등등 목구멍에 여러개 넣을 수 있다.

	
	

// return c;의 구멍이 int이니까 int라고 선언해준거다.
// 보통 함수는 다른 파일에 저장하거나, 함수 원형을 앞에다가 선언해준다.
// "int sum(int asdfsadf, int asdfasdfk) 막/안 쳐도 된다 int 저장공간에 int로 된 변수가 2개 있는지만 확인하면 된다 " 






int main(){

	printf("start\n");
	
	

// a, b 에 든 값을 복사해서 
// sum이라는 함수에 넘기는 것이다	
	  // sum 이 있는 메모리 공간으로 점프 !  

	int a =1 ;
	int b =2 ;
 	int result;
       	
	result = sum(a, b);
	printf("%d\n", result);	

	return 1;
	
}


int sum(int a, int b){

	int c =0 ;
	c=a+b;
	return c;

}


