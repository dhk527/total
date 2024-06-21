#include <stdio.h>

int main(){

	// char str[6]="hello";

	char str[6];
  // str[6] 어디로 선언할지는 모르는데 0~5까지 번지는 다닥다닥 붙어있다.
  //
	str[0] ='h';
	str[1] ='e';
	str[2] ='l';
	str[3] ='l';
	str[4] ='o';
	str[5] ='\0'; // "null 문자를 꼭 포함해야된다 안그러면 bug가 생김
		// null 문자는 " str[5] = \0; " 도 있고" str[5]= 0x00; " 또 "str[5]=0;  도 가능하다.

	str[6] = 'w';
	str[7] = 'o';
	str[8] = 'r';
	str[9] - 'l';
	str[10] = 'd' ;


	char str1 = 'h';
	char str2 = 'e';
	char str3 = 'l';
	char str4 = 'l';
	char str5 = 'o';
	char str6 = '\0';
// 상기는 랜덤으로 주소가 다닥다닥 붙어 있지 않다.

	printf("%s\n", str);
//다다닥다닥 해서 쉽게 맨위에 주소 번지부터 쭈욱 이어버리면 된다.
//
	printf("%c%c%c%c%c%c\n",str1,str2,str3,str4,str5);
// 다닥다닥이 아니라서 str1 str2 str3 str4 주소를 일일이 입력해야 한다.
//  
}







