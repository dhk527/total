#include <stdio.h>
#include <stdlib.h>

#define MAX 200

int g_h_total = 0;

void add_h(int * h_num){
	
	h_num[g_h_total++]=(g_h_total+1) *2;

}


void print_all(int * h_num){

	int i = 0;

	while(*(h_num + i)){

		printf("[%d] : %d\n " , i,  *(h_num + i ));
	
	
		i++;
		if( i >= MAX){
			break;
		}

	}



}
/*
void haapy(){

	if()

	return;
} //반환값이 없다.  return이 없다

void * happy(){
"무엇이 반환 되는지는 모르겠으나 "

} // 포인터는 무조건 시스템 메모리 64비트면 8바이트 32비트면 4바이트로 반환 된다. 나는 64비트니까 8바이트겠녜
*/

int main(){

//	int h_num[MAX] = {0, } ; // 이게 뭘까? 0~199번에 0 번 부터 시작이고 그 이후는 아직 안 정해져 있는 듯
				 // 또 배열은 포인터랑 같은 것임 A[]이면 결국 *A에 값과 동일 하게 여겨짐 ㅇㅇ A[1]= *(A+1) 아마 접근 방식만 다를 뿐 컴파일 이후 결과는 같은 비트인듯 근데 왜 이걸 쓰냐 ? 배열은 한정적이지만
				 // 포인터는 RAM에서 계속 휘발 되는 값들에서 구하고자 하는 값을 그대로 갖을라고 하는 듯? 나만의 언어로 바꿔야 할듯?


  	int * h_num; // stack 공간에 배열을 설정   


	h_num = (int *)  malloc (sizeof(int)*MAX ); // heap 공간에 동적 할당이 된 것이다.
	//h_num에	// 시작주소를 	 // 200 개의 공간에 할당 
	*h_num = 4;
printf("%d\n", *h_num);

	

/*

	for(int i = 0 ; i < MAX ; i++){
	add_h(h_num);
	}
	print_all(h_num); */

/* 위의 것보다 더 좋은 것
	add_h(h_num);
	add_h(h_num);
	add_h(h_num);

	print_all(h_num);	
*/

	return 1;

}








