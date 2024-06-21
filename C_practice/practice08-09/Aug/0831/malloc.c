#include <stdio.h>
#include <stdlib.h>
int d = 0b100;
char b[0xfff]; // 너무 크면 RAM이 차지할 수 없다.
//0xffffffff 8x8 64bit 2^32= 2x2x2^30 = 4GB 가 된다.
int main() {
    char* a = (char*)malloc(sizeof(b)); // 메모리 할당
    free(a); // 할당된 메모리 해제
    
    printf("%d",d);
    return 0;
}
