#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int n=45;
int p=3;

int solution(int n) {
	int answer = 0;
	while(n<p)
	{
		n/=p;
		answer = n ;
		printf("%d", n);

	}

	return answer;
}

int main(){
		
	int solution(n);
return 0;
}



