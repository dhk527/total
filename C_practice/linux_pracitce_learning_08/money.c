#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
	    long long answer = -1;

	for(int = 0 ; i < count ; i++){ 
		int money_sum =0;
		int change = 0;

		money_sum += price *count:
		change= money_sum - money ;

		if(change > 0){

			return change;
		}else{
			return 0;
		}

	    return answer;
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
	printf("result = %d",result)


}

