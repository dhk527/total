#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

FILE * fd;
FILE * fd2;

//int fd;
int main(){

printf("hi\n");
fd = fopen("a.txt","a");

fprintf(fd,"hello\n"); 
printf("fd : %d\n", fd->_fileno);

fd2 = fopen("b.txt", "a+");

fprintf(fd2, "hello!!!\n");
printf("fd2 : %d\n", fd2 ->_fileno);

fclose(fd);


}

