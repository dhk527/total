#include <stdio.h>

int main(){

int k; 
int N;
int n;
printf("원하는 정수 N은? : ");
scanf("%d",&N);
k=N;
n=N-1;
 for(int i =0 ; i<N-1;i++) //N번 돌린다.
 { 
  k = k*n;
  n--; 
 }; // N_fatory= N*N-1*N-2*...*N-(N-1)

  printf("%d", k );

return 0;

}