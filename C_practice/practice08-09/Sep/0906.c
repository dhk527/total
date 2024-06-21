 #include <stdio.h>
 #include <string.h>

 #define N 28
/*
1. 한칸 씩 회전 
2. 크기는 16진수 0x0~0xF , 8<= N <= 28
3. rotate 돌릴 때 마a다, 케이스 하나씩 줄어들음
4. 자물쇠가 걸린 숫자 N은 4의 배수 N=4(n+2) n=0~5
5. K <= N
6. 
*/
int i = 0;

int rot_right();

int main(){
    
    char A[N] = ""; 
    printf("N개의 오른쪽으로 도는 rotate는? ");
    scanf("%s",(char*) &A);
    
    printf("%s\n",A);
    printf("%p\n",(void*) &A[1]); // %P 번지 출력하는 거 맞네 ㅡㅡ
       
    rot_right(A);
    printf("%s\n",A);

 
    return 0;
}

int rot_right(char * A){

    char temp;
    temp = A[0];

    for(i=1;i<N;i++){
        A[i-1]=A[i];       
    }
    int l=strlen(A);
    A[l]=temp;

}