#include <stdio.h>

int main (){

int a = 10;
 // a가 9-> 0까지 찍을 떄까지 가는 거다 "while은 (0) false가 될 때까지 참이니까 계속 반복하는 것이다."
 // int b =3 ;
 // while (a>b); a--; 일시 9 8 7 6 5 4 까지는 동작 참=1 이니까 근데 그 이후에는 0이 되니까 동작 정지
 // while ((a>b) && a==b)) a랑 b가 같은 지 확인 AND a>b 이면 둘이 적용이 안댐.
 // 무한 루프는? while(1) 계속 도는거임 ㅇㅇ -> 버그를 만들어 내는 프로그램이 된다.
	while (a){
	
	a--;
	printf("a : %d\n", a);

	}
	return 1;

}

 
