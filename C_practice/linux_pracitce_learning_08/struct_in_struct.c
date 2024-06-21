#include <stdio.h>
#include <string.h>

typedef struct human{
	char name[20];
	int age;
	char gender; // 25 byte 일줄 알았지만 28byte 가나온다 why? 메모리 계산 상 처리과정이 25bye 보다 더 빠르므로 어차피 메모리르 다 읽는다. 그래서 그냥 28 byte로 나누는게 더 딱딱 맞나봄

}human;


typedef struct student{
	int s_id;
	human man; // 객체 지향적인 느낌으로 구조체 안에 구조체를 넣어봤다. 
}std;


void std_func(std *st);
// int a "4 byte 메모리 저장 공간을 가지고 있고 자동으로 ex: 0x________ 메모리 주소를 할당되있음 그리고 이 할당 주소를 a라고1명명 한다. "
// int *pa "1. 메모리 상에서는 4 byte 이긴하나, 배열 포인터는 연관돼있고 int로 한 이유는 포인터 상 저장공간이 4byte 씩 움직임을 나타내는 것이다"
// "2. int 4 byte 씩 움직이고(순서대로) *pa a주소번지를 가리키는 뜻이고 *는 주소번지를 나타내는 값이 들어있따고 알려주는 것이다. pa = 0x______ 주소 번지 알려주기  *pa = pa에 나타난 주소 번지로 가서 주소 따오기 pa= &a &pa =  pa가 가진 주소 번지.  


int main(){

	std st1;
	
	std_func(&st1); // pointer를 써서 함수호출
	st1.s_id= 10;  // "st1.s_id 이게 뭐냐면 std 변환 인자(구조체) 이고 std 안에 주소번지이름를 접근할 때 사용
	strcpy(st1.man.name,"kdh");  
	st1.man.age=25;
	st1.man.gender = 'm';	


	printf("s_id : %d\n",st1.s_id); 
	printf("name : %s\n",st1.man.name);

	return 1;

}

 void std_func(std * st){   // 함수안에 함수는 메모리 용량의 이동이 가므로 stack이 움직여서 base stack -24 같이 변수 구분
			    // 짓는 곳에 제대로 값을 호출을 못한다 그렇기 때문에 값 복사와 그 복사 된 값을 포인터로 부르는 것이 필요 이때 사용하는 것이 -> 로 st는 (struct student)의 std 로 간단하게 변수를 변환시킨 것이고
			    // std의 type은   
 		st->s_id =10;
		strcpy(st->man.name, " kdh is king");

		printf("s_id : %d\n", st-> s_id);
		printf("name : %s\n", st->man.name);

		}































