#include "sum.h"

#ifdef VER
int sum(int a, int b){

	return a + b;

}
#elif defined VER2

int sum(int a, int b){

	return b / a ;

}

#else
 
int sum(int a, int b){

	return a * b;

}




#endif
