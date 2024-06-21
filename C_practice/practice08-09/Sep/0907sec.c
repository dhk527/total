#include <stdio.h>
/* 킹, 퀸, 룩 , 비숍, 나이트, 폰 (흰색) 검정색은 8개가 있음*/

int main(){
    int c,d,e,f,g,a;
    scanf("%d %d %d %d %d %d",&c,&d,&e,&f,&g,&a);
    if(c==1 && d==1 && e==2 &&f==2 &&g==2 &&a==8){
    printf("%d %d %d %d %d %d",c,d,e,f,g,a);
    }
    else{ 
        int C,D,E,F,G,A;
        if(c!=1)
        {printf("%d ",C=1-c);}else{printf("0 ");}
        if(d!=1)
        {printf("%d ",D=1-d);}else{printf("0 ");}
        if(e!=2)
        {printf("%d ",E=2-e);}else{printf("0 ");}
        if(f!=2)
        {printf("%d ",F=2-f);}else{printf("0 ");}
        if(g!=2)
        {printf("%d ",G=2-g);}else{printf("0 ");}
        if(a!=8)
        {printf("%d ",A=8-a);}else{printf("0 ");}
    
    } 
    /* 반복이 너무 된다.
    배열을 통해 순차적으로 계산 값을 옮기면 더 쉽지 않을까?
    계산도 되있는데...
    */
       
       return 0;
}