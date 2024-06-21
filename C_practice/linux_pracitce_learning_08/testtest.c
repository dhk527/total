#include <stdio.h>

int sum(int a, float b){
    int c;
    c=a+b;

    return c;    
}

int main(){

    
    /*
    float f;
    printf("실수를 입력하시오 : ");
    scanf("%f", &f);
// scanf 시에는 \n 넣으면 오류난다.
    int i = (((10000)*f - 10000*((int)f))- ((10000)*f- 100*((int)100*f)) )/100;
    printf("i=%d\n", i);

    return 0;
*/ // 진짜 노가다...
    /* float f;
	printf("실수를 입력하시오 : ");
	scanf("%f",&f);
    
    int i = ((int)(100*f)%100);
    printf("%d",i);
	return 0;
    */
}
/*
int main(){
    int s=sum(1234,46.34);
    printf("summ : %d \n",s);
    return 0;

}*/