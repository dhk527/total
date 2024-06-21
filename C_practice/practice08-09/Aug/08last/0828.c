#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    /* 1~20 사이 랜덤으로 생성rand();
생성된 숫자가 int 10개짜리 배열 안에 있는값이면 다시 생성for(i<10){arry[i]=gen(i)}
중복되지 않는 숫자를 10개 생성하기gen{){rand()%20}
gen(); 은 1~20 사이 랜덤으로 생성하는 함수임
int arr🔟 = { 1,2,4,7,9,10,11,14,15,16};은 10개짜리 배열임
*/

int gen();
int check();

int main(){
    gen();   
  //  printf("%d\n", a); // %(나머지는) 범위 제한 방식 내가 원하는 값으로 추출이 가능해짐
    return 0;
}

int gen(){
    unsigned int seed=(unsigned int)time(NULL); // 시변하는 변수, 한번 발생한 이후 시스템상 난수가 똑같은 것을 방지.
    srandom(seed);

    int num;
    int arry[10];

    for(int j =0 ; j<10; j++){ // 배열 10개 뽑q기
    do{ // 난수 검사문
        num=random()%20+1; // do-while문은 일단 뽑고 참, 거짓인지 판별하는 판별문이라 생각하기.
    }while(check(arry, num, j)); // 검사를 해서 참이면 돌리고 아니면 다시 난수 검사)
    arry[j]=num;
    printf("%d ", arry[j]);
    }
}

int check(int arry[], int num , int size){
        for(int i=0;i<size; i++){
            if(arry[i] == num){
                return 1; //중복된 난수 없음
                            }
                }
        return 0; //중복된 난수 없음
        
}

