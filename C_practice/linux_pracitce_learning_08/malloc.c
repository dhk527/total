#include <stdio.h>
#define MAX 200

int g_h_total = 0;

void add_h(int * h_num){

	h_num[g_h_total++] = (g_h_total+ 1)*2;

}

void print_all(int * h_num){

	int i = 0;
	while(*(h_num+i)){
		printf("번지수[%d] : %d\n",i, *(h_num+i));
		i++;

		if(i>=MAX){
			break;
		}
	}
} 


	int main(){

		int h_num[200] = {0.};
/*
		add_h(h_num);
		add_h(h_num);
		add_h(h_num);  
*/			
		// 처리 속도가 빠른 array 그러나 문제가 있다	
		// "배열을 늘릴수가 없다!" -> malloc 함수 사용! -> 그 다음 linked list
		 
		
		for(int i =0 ; i<MAX ; i++){ 
			add_h(h_num);
		}	

		print_all(h_num);
		
		return 1; 

	}
	

