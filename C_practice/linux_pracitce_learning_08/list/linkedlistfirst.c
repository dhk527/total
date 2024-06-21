#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

#define MAX 200

typedef struct human{

	int num;
	char name[20];
	human * next; // linkedlist 라는 것이다.

}human;

human * head;
head = (human*) malloc(sizeof(human));

int g_h_total = 0;

void add_h(human* h_num){


	//"아래랑 다를 바 없다 배열 == 포인터 "*(h_num + g_h_total)-> num = (g_h_total + 1) * 2; 
	h_num[g_h_total].num = (g_h_total + 1) * 2;
	sprintf(h_num[g_h_total++].name, "test%d", g_h_total + 1);
	
	//printf("test%d", inter); 
}


void print_all(human* h_num){

	int i= 0 ;

	while(h_num[i].num){
			
			
		printf("============\n") ;
		printf("num[%d] : %d\n", i , h_num[i].num) ;
		printf("name[%d] : %s\n", i , h_num[i].name) ;
		printf("===========\n") ;
	
		i++;
		if(i >= MAX){
			break;
		}

	}
}


int main(){

	human h_num[MAX];

	for(int i = 0; i < MAX ; i ++){
		add_h(h_num); // 배열이다 보니까 &h_num 으로 할 필요 없음 어차피 주소값임 ㅇㅇ
	}

	print_all(h_num);
	return 1;
}




