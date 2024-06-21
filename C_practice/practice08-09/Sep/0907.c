#include <stdio.h>


int main(){
int A;
  int B;
    int C;
    
    printf("A 값은?:");
    scanf("%d",&A);
    printf("B 값은?:");
    scanf("%d",&B);
    printf("C 값은?:");
    scanf("%d",&C);
  if((2<=A && A<=1000) && (2<=B && B<=1000) && (2<=C && C<=1000)){
    printf("(A+B)%%C 의 답 %d \n", (A+B)%C)  ;
    printf("((A%%C) + (B%%C))%%C = %d \n ", ((A%C) + (B%C))%C ) ;
    printf("(A*B)%%C  =%d \n ", (A*B)%C ) ;
    printf("((A%%C) * (B%%C))%%C = %d \n ",  ((A%C) * (B%C))%C ) ;
  }else{ 
    printf("범위에 맞게 쓰세요");
    }

}