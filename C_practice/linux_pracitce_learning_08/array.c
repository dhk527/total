#include <stdio.h>

int main(){
	int arryA[10];

	for(int i=0; i<10 ; i++){
		

	arryA[i]=(i*2)%3; // array를 쓰는 이유가 나온다. 붙어있으니까 밑에 와 같은 연산이 되는 것이다 int a1 int a2 int a3 같이 쭉쭉 변수와 곱을 일일이 하는 것은 헬이니까 쓰는 것이다.
			  // "코드 재활용도 쉬운게 MAX를 100으로 해서 i < MAX로 해서 #define MAX 10000 이런식으로 해서 코드를 재활용하기가 너무 좋다" 
			  // 배열은 무조건 알아야하고 자유자재로 쓸 수 있어야 된다!
			  // 장점도 많아 RANDOM ACCESS도 가능!
			  // "linked list" 포인터 일일이 접근이 된다 순차적으로 근데 array는 바로 접근해서 갖고온다.
			   }

	for (int i = 0 ; i < 10 ; i ++){





		printf("arryA[%d]=%d \n", i, arryA[i]);

			


	}


	int *a = arryA;
// array의 시작을 나타내는 주소 
	printf(" a= %d\n", a);
	
return 1; 


	}


