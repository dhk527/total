#include <stdio.h>
#include <string.h>
#define MAX 1000000
int main(){
char str[MAX];

scanf("%[^\n]", str);
int cnt = 0;
unsigned int i=0;
unsigned int start =0;
unsigned long int k=0;

k = strlen(str);

for(i=0 ; i<k ; i++){ // 앞에 뭐가 있든 같에 공백이면 start의 cnt 세서 앞에 글자를 무시하게 한다.
    if(str[i]==' '){
   start++;}
   
   if(str[i]!=' '){
    break;}

}

for(i =start; i<k ; i++){ // 문자 + 스페이스 나오면 카운트 한다 (단어 +1)
    if((str[i]!=' ') && (str[i+1]==' ')){
        cnt++;
    }
  
}
  if(str[k-1]!=' '){// 마지막행은 case가 두개로 나누어진다. 마지막 문자가 공백 or ~공백
  // 일단 strlen 은 문자열 길이이다
  // 그리고 str[k-1] 에서 k가 아닌 이유는 "0부터 시작하기 떄문이다 !!!! " 여기서 헷갈림
  // if문을 쓰는 것은 공백이 없을 경우를 대비한 것이고
  // 위의 for문은 공백이 있을 경우에서 카운트 하는 것이다.
  // 즉 이 if문을 쓰는 이유는 공백이 없을 경우 빡빡할 때 마지막 문자열 str[k-1] 이 공백이 아니라면 cnt 시키는 것이다.
  // !=' ' 쓰는 이유는 이것이 공백이라면 위의 for문에서 실행이 끝난 것이고
  // !=' ' 공백이 아니라면 if를 통해 마지막 단어를 cnt 시킬 수 있기 때문이다.
        cnt++;
}

printf("%d\n",cnt);
return 0;
} 
