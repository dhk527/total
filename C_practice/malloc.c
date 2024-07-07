#include <stdio.h>
#include <stdlib.h>


void HEAP (int n)
{
	int *p;
	p = (int *)malloc((sizeof(int))*n);
}


int main()
{
	int n = 32;
	HEAP(n);
	FILE* fp;
	fp=fopen("hi", "wb");
	fwrite(p , 1 , sizeof(int)*n , fp); 
	fclose(fp);

}

