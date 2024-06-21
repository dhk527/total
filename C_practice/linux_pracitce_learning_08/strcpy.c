#include <stdio.h>
#include <string.h>



int main(){
/*
	char str[20] =  "hello world\n";
	char str_c[20] = "good job\n";

*/
// " strcmp.c를 대신 여기다가 활용 보시다 시피 끝에 문자만 바뀌는걸 기준으로 한다.
	char str[20] =  "abc\n";
	char str_c[20] = "abcdf\n";
	printf("%d\n", strcmp(str,str_c));
}	/*
	printf("str_c : %s", str_c);

	strcpy(str_c, str);
// strcpy 맨처음 문자열을 카피하는 기능 string copy
//strcpy(맨 앞, 맨 뒤 )
	printf("str_c : %s", str_c);

}

//	char *strcpy(char *dest, const char *src){
/* #include로 표현 말고 원형으로 표현 시에 *dest 포인터에 있는 문자열을 *src로 변환하는 방식은?

	while(*src){

		*dest++ = *src++;
			}


		for(int i = 0 ; i<++){
		dest[i]=src[i];

	}
 }근데 위험할 수 있다 문자열이 끝나는게 없으면 100% 빠개지는 함수다.
*/

// 그러면 안전하게 하려면? strlen을 써보자. man size_t 찾고 함수 원형(시놉시스)를 만들어 보자
 
int strcmp(const char *s1, const char *s2){

int s1len = strlen(s1);
int s2len = strlen(s2);
int len = 0;
if(s1len >= s2len){
	len = s1len;
}else{
	len = s2len;
}


//" 앞 부터 비교하니까 for문을 돌려야 한다. "/


for(int i = 0; i < len ; i++){
	if(*(s1+i) == 0){
		return 0 - *(s2+i);
			
	}
	else if (*(s2+i) == 0){
		return *(s1+i) - 0 ;


	int val = *(s1+i) - *(s2+i);
	if(val != 0){
		return val;
	}
      } 	

// 길이가 같은 경우는 해결이 된다.



}


	size_t strlen(const char *s){
//size_t로 해보기 궁금하면 man size_t 해봐라
//
 		int count = 0;
			// 여기서 if는  s가 null이 아니면 strlen으로 들어가고 ;
		if(s != NULL){
			for(int i =0 ; ; i++){
			
				if(*(s+i)==0)
				{
					break;
				}			
				else
				{
					count++;
				}
			}
		}
		else{
			return -1;
		}

			return count;


		}

 char *strcpy(char *dest, const char *src){
// char은 #incldue<string.h>대신 쓸 수 있는 synopsis이다.	
 
	for(int i = 0 ; i < strlen(src); i++){
		dest[i]=src[i];
	}
		
		return dest;}










