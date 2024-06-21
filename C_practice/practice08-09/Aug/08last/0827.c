#include <stdio.h>

int* function(){
  static  int a =2 ; //지역변수가 튀어나와도 정적 변수를 사용하면 지역변수가 빠져나가도 죽지 않는다.
    return &a;
}

int main(){
int *pa = function();
printf("%d\n", *pa);

return 0;
}