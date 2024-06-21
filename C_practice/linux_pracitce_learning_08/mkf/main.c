#include <stdio.h>
#include "sum.h"


int main(){
#ifdef DEBUG
	printf("DEBUG\n");
	printf("sunm : %d\n", sum(1,2));
#else
	printf("hello\n");
	printf("sunm : %d\n" ,sum(1,2));


#endif

}

