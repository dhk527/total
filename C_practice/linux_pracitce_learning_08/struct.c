#include <stdio.h>
#include <string.h>

struct student {

	int s_id;               // 4 byte
	char name[20];          // 1 byte * 20 - 다닥다닥 붙은 번지수가 20개니까 
	
	char a;  // struct라는 것이 변수 type이라는 것을 알아야=즉 개념을 알아라야
			      //  포인터도 활용이 됨을 알 수 있다.그 안에 또 struct안에 struct 타입에 넣을 수 있다.
	// " struct 라는 구조는 8byte 인듯하다 int char struct 같이 쓰니 32바이트가 나옴 ㅇㅇ" 

};
/*
typedef student {

	int s_id;               // 4 byte
	char name[20];          // 1 byte * 20 - 다닥다닥 붙은 번지수가 20개니까 
	
}std;  뒤에다가 std; 붙여서 짧게 하는 방법도 있다~ " 보통 이런 식으로 예약어를 함 ㅇㅇ"  

*/

typedef struct student std; // " main 에다가 struct student를 맨날 치는 것은 귀찮으니까 이걸 선언함



void std_func(std st);

{

	std st1;
	std_func(st1);

	return 1;
}


// " 그리고 main에 있는 struct student st1을 -> std st1; 이렇게 바꾸어도 된다.

// typedef int iint;  
// #define size32_t int      참고로 알아두기 ㅇㅇ 

 // class(java)는 struct랑 다르게 24 byte아니다 ㅇㅇ 지들끼리 뭔가 있어서 다름 
  // opener class에 포함이 되있어서 딱딱딱 용량이 맞고 바이트가 딱 떨어지는 맛이 없어짐
  // debugging 시 클래스 개념을 들어가게 되면 복잡해진데요...
  //

	

// 함수가 아니다 이건 int 같은 새로운 type을 만든 거다 " int, float, char 같은 새로운 타입을 만든거임 ㅇㅇ "
// 즉 int + char로 만든 struct인 거다.
// java의 class 부모님은 c언어 struct에서 나온 것임 (정확히는 c++이긴 하다만 ㅇㅇ...)



int main(){
	struct student st1;

	int a;
	st1.s_id=10;   // st1 타입에 딱 맞는 struct를 "st1." 로 표현한다.
	strcpy(st1.name,"kdh is king!"); 
	// man strcpy 확인시 strcpy(복사 당할 주소 *dest destiny , *src 복사 내용이 저장된 주소)

	printf("s_id : %d\n", st1.s_id);
	printf("name : %s\n ", st1.name);
	printf("struct size : %ld\n", sizeof(st1));
	

	return 1;

}
