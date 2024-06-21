#include <stdio.h>



int main(){

	int isRunning = 1;

	while(1){

		if(isRunning == 0){

			printf(" 사용자가 시스템을 종료했습니다\n");

			break;
		}

		printf("종료를 원하면 : __ \b\b");
		scanf("%d", &isRunning);
		getchar();

		printf("너가 :입력한 값 %d\n", isRunning);
	}
}


// 쓰레드를 쓸 때 사용 할 수 있는 구문
// "break"를 때려서 작동 시킬 때 쓴다. "continue"도 응용해서 써보자구!
