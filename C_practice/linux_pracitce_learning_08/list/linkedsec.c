#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data{
	int num;
	char name[20];
	struct data * next; // 별 모양이 data라면 next는 그 안에 포인터형태의 데이터 타입이다 기본 자료형 이라고도 불리운다.


}data; // 32 bit int 4 name[20] 1*20 *next 

data * g_head = NULL;  
data * g_tail = NULL; // C언어에 포인터 변수가 어떠한 메모리 주소를 가리키지 않을 떄 사용되는 값 " 포인터 변수가 유효한 메모리 주소를 가리키지 않을 때, 명시적으로 나타내기 위해 NULL을 사용한다." 

void printAll(){
	data * temp = g_head; // 뻉뻉이 돌리기


	while(temp->next)
		{
		printf("=s=\n");
		printf("num : %d\n", temp->num);
		printf("name : %s\n", temp->name);
		printf("=e=\n");
		temp = temp -> next;
		}

		printf("=s=\n");
		printf("num : %d\n", temp->num);
		printf("name : %s\n", temp->name);
		printf("=e=\n");
	}

int insert(int num, char * name){ // node에 data를 넣어주는 해위 중이다.

	data *node = malloc(sizeof(data)); // HEAD와 TAIL을 이을 노드가 생성이 됐다.
	node->num = num;// "좌항은 이전의 num 우항은 이후의 매개변수 num "// 중요한 것은  malloc은 메모리르 할당 말고 물리적으로 주소를 갖지 않음  heap에서 
//	"이름하고 넘버를 넣어준는 중이다" 프로그램 실행시 할당이 되는 것으로 주소를 기억할 수 없으니 포인터를 사용하는 것이다.
	if(name != NULL){
		strcpy(node->name, name);     
		// 이것도 마찬가지로 " 좌항은ㅌ 이전의 name 우항은 매개변수 name 이다 "
		// 그런데 얘는 배열이라서 "node->num = num 처럼 못하는 것이다 ㅇㅇ"
 	 }
	
	// for문을 통해 원하는 list까지 끝냈으면 " 결국에는 마지막 node -> next = NULL" 을 하면 끝난다.
	node -> next = NULL; // node가 있는데 node는 구조체 data안에 있고 data에는 int char가 24바이트 만큼있고
			     // 그다음에 next라는 포인터 변수가 8바이트 있따 근데 node도 포인터 변수라고 했다. 그래서 
			     // malloc으로 메모리 할당 크기를 만들어주고 그 이후에 node 라는 구조체에서 -> next를 통해 next 포인터 변수가 실제 가리키는 값을 나타내고 그것이 NULL이다를 표현 한것이다.
	
// "포인터 변수 HEAD와 TAIL을 연결해주는 DATA의 값에 data를 넣어주는 중(이름하고 number 그리고 꼬리(next)는 NULL에 이어준다" 순차적인 노드로 이어지는 방식
	
	if(g_head == NULL) { // node가 처음인 경우
		g_head = node;
		g_tail = node;
		return 1;
	}else{ // node끼리 연결 해주는 행위 
		data * temp = g_head; // 뻉뻉이 돌리기
		while(temp->next){
			temp = temp -> next; //" 다음 노드로 가는 것을 표현 즉 -> 이면 좌항으로 값을 옮기니 다음 것으로 이어진다 포인터는 -> , 배열은 . 임 
					   // " 구조체로 가는 거라 temp.next라고 생각하면된다 
		}

		temp->next = node;
		g_tail = node;
		return 1;

		}
	return 0;

	}
int main(){

 char name[20]="";
	for(int i=0; i<10 ; i ++)
	{
	//	sprintf(name,"test%d",i); // name은 buffer라고 불리며 저장된 문자열을 말한다 " sprintf는 printf랑 ㅅ쓰임이 다르다 얘는 문자열을 생성하여 변수에 저장하는 것이다. 문자열 name(=buffer) 라고 불리며 저장된 문자열을 저장해야 
					  // " insert에 들어갈 때 순서를 기억하여 name을 저장 할 수 있다. 없으면 안된다 "
		insert(i, name);	  // name은 문자열을 저장할 버퍼의 주소다.;
	}
	printAll();
	return 1;

}


















