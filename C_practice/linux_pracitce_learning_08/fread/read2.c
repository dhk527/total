#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

//FILE * fd;

int fd;
int main(){

printf("hi\n");

//fd=fopen("a.txt","r");
//fopen이 사실은 이 아래 open을 가지고 만든 거다  즉 그 아래 두줄이 주석 친 두줄을 표현 하는 것이다. '.
fd= open("a.txt", O_WRONLY | O_APPEND); // "wronly와 append 모두 숫자로 표현된다 " 
printf("fd : %d\n ", fd); // 0번이 표준 입력 : 키보드 1번, 표준 출력 : 콘솔, 2번 에러 출력  콘솔 3번~4번 
			  // 0~2번이 버그를 일으킨다. 1 =sockdet(asdfasd);  open(fd); close();  어디선가 fd를 닫아버리면 0이 되버린다 close(0)이 되고 0=sockdet 되니까 버그가 일어난다. 그래서 커맨드 입력 받는 함수를.. 받는데
			  // 어느 순간 무한 루프 도는 그러한 이유가 뭐냐면 close(0); fd library 뚫고 뚫고 뚫어보니까 디버깅 해보니까 
write(fd,"good!!!\n",8); // 제일 마지막은 NULL이 있음을 인지하라 

close(fd); // 파일닫기 

// fprintf(stdout,"hello\n");

//write(1, "hi123123123\n",3);

}


