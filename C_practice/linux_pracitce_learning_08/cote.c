#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
long long answer = -1;

	int money_sum =0;
	int change = 0;
	for(int i = 1; i <= count ; i++){ 
		money_sum += price *i;
//디버깅 개꿀팁 중간에 printf를 통해 문제파악 해보기	printf(" %d\n",money_sum);
	}
	
	change= money_sum - money ;

//디버깅 개꿀팁 중간에 printf를 통해 해결 과정이 틀린거 확인하기ㅍ	printf(" %d\n",money_sum);
	
	if(change > 0){

			return change;
		}else{
			return 0;
		}

	    
      }


int main() {

	int price = 0;
	int money = 0;
	int count = 0;
	
	printf(" 가격을 입력하세요 : __\b\b\b");
	scanf("%d", &price);
	getchar();

	
	printf(" 가진돈을 입력하시오 : __\b\b\b");
	scanf("%d", &money);
	getchar();


	printf(" 몇 번 이용할 지 입력하세요 : __\b\b\b");
	scanf("%d", &count);
	getchar();

	printf("%d, %d, %d\n", price, money, count);
		
	long long result = solution(price,money,count);
	printf(" 부족한 금액은? : result = %lld\n",result);


}

