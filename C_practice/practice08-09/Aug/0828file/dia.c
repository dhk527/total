#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,j=0 ;
    char star = '*';
    char space =' ';
    int num;
    int c=0;
    int d=1;
    int f=1;
    int star_cnt=0;

    printf("몇 줄짜리 다이아 몬드? : ");
    scanf("%d", &num);

    for(int k=0;k<num;k++){ // 다음 행 가는 for
        
        for (i=abs(num/2-c); i>0; i--){ 
        printf("%c",space);
                    } // 한 줄에 space for 

        if(num <= star_cnt){ 
        for(int e=0; e<num-2*f; e++){ // 별찍는게 초과하면 역으로 줄이기
                    printf("%c",star);} 
                    f++;

        }else{ 
        for(j=0; j<2*d-1; j++){ // 한 줄에 star for
                     printf("%c",star);}
                     star_cnt=j;
        } 
        
                c++; // c는 스페이스가 -1씩 줄어들기 위해 사용
                d++; // d는 별이 +2씩 증가 시키기 위해 사용
    
         printf("\n");
    }
    return 0;
}




    



