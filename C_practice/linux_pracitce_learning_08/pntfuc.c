#include <stdio.h>

void test(){
	printf("func test\n");

}

void test22(){
	printf("func test22\n");
}

int main(){

	void (*fp)(); //포인터 함수로 선언 * 니까 주소지 선언 추가로 한다. 
	fp=test;
	fp();

	fp=test22;
	fp();
	
	printf("test : %u, &test : %u\n", test, &test);
		
	//" 뭐야 배열이랑 compiler랑 하는짓이 배열이랑 똑같네? "
	printf("%d\n",sizeof(fp));



	return 1;
	
	}
// c언어 상에서는 int 함수; int 함수= 3 ; 이런 식으로 할 시 함수호출이 불가능 c++는 이런 것을 없애기 위해
// namespace.함수 이런 식으로 쓰나보다 ㅇㅇ... JAVa에서는 충돌될 경우 패키지를 나누게 된다.





