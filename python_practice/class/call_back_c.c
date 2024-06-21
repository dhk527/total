#include <stdio.h>

typedef int (*call_back)(int,int);

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int calc(int num1, int num2, call_back func)
{
	return func(num1, num2);
}

// None-typedef

int CALC(int num1, int num2, int (*func)(int, int))
{
	return func(num1, num2);
}



int main()
{
	int sol;
	int sol1;

	sol = calc(3,4,add);
	printf("%d",sol);
	
	sol1 = CALC(3,4,add);
	printf("%d",sol1);
}





