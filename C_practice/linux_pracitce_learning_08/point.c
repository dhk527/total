#include <stdio.h>

//pointer 2~3번 연습해서 가지고 놀면 포인터 가지고 고민할게 없어진다 !

int main(){

	int a;
	int *pa;
	int **ppa;
	// 결국 포인터는 주소 번지를 넣는 주소 번지의 이름이다.
	

	a= 3;
	
	printf("a=%d\n", a);
	printf("&a=%u\n",&a);
	
	
	pa=&a;
	     
       	printf("pa=%u\n",pa);
	*pa= 5; //a 라고 불리는 메모리 주소 번지의 값3을 5로 바꾸는 것이 다.
	printf("pa=%d\n",*pa);
	printf("&pa=%u\n",&pa);

	ppa=&pa;

	printf("*ppa=%u\n",*ppa);
	printf("**ppa=%u\n",**ppa);//2중 포인터정도까지만 알면 된다 !
				    
	printf("&ppa=%u\n",&ppa);
	     

	return 1;

}

	// ./a.out 시 계속 메모리가 바뀐다 -> 그래서 사용 하는 것이다 ㅇㅇ..
	
