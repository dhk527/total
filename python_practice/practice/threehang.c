#include <stdio.h>

int main() {
	int k = 33;
	int hi = (k < 444) ? printf("%d\n", k) : printf("hi\n");
	
	int a=printf("asdf%d\n",hi);// man printf 3 에서 확인하시다시피 nmem 개수를 return
	printf("%d",a);// 레전드네 이거 a 개수를 반환해줌. ㅇㅇ...

	return 0;
}

