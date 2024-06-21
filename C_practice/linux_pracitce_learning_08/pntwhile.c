#include <stdio.h>


void swap(int * a, int *b){

	int c ;
	c= *a;
	*a=*b;
	*b=c;

}

int main(){
// char str[12]로 하면 hello world를 칠수는 있으나 0이 있는 메모리 공간 할당이 안될 시 무한루프 돌릴 수가 있따
// while[~0]이므로 그렇다.
// 그래서 넉넉하게 str bye 공간 확보가 중요하다.
	char str[100]="hello world\n";
	char * pstr = str;

		while(*pstr){
		
		putchar(*pstr++);
// 그러면 ello world 어케 안나오게 할까? 1. hello 앞에 space를 넣어서 스페이스바 주소 하나 할당 (첫번쨰 주소지로 할당)
// 2. do{putchar(*pstr); } while(*(pstr++));

//


		}


		return 1;


}























