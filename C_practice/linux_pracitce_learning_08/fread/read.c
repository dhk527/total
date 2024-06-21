#include <stdio.h>

int main(){

	FILE * fd;
	char ch;
	fd = fopen("a.txt","a"); //"a.txt","a" 뒤에 r은 읽는 것 w는 쓰는 것 a는 뒤에다가 추가
	if(fd == NULL){
		printf("file open error\n");
	}else{
		printf("success\n");
	
	}

	fprintf(fd,"hello~ hello~ 한글도 되나요? \n");
	
	fclose(fd);



	fd = fopen("a.txt","r");
	if(fd == NULL){

		printf("file opne error\n");
	}else{
		printf("succesee\n");
	}
	


	while(1){
		
		ch = fgetc(fd);
		
		if(ch == EOF){
			break;
			}
		putchar(ch);	
	}

	fclose(fd);

} 
