/* scanf는 \n를 포함하는 순간 버퍼가 끝난다. 

즉 if ((문자)\n == \n){
    break; 비슷한 종료 함수가 있을 것이다 있을 것이다. 
} */

#include <stdio.h>
int main() {
  int num, i;
  char c[20];

  printf("숫자를 입력하세요 : ");
  scanf("%d", &num);  // %d 지정 서식자만 받는다.

 // 123abc\n 을 치게 되면 

  getchar(); // getchar는 하나의 char을 받는다. 즉 a만 받음

  printf("문자를 입력하세요 : ");
  scanf("%s", c); // buffer에 bc가 입력이 된다. (이미 받았다.)

  // 왜 자동으로 받게 되었는가? buffer라는 공간에 아직도 \n가 있기 때문이다. 즉 \n가 있는 순간 이러한 문제를 겪는다.

  printf("입력한 문자 : %s\n", c);  //  bc 둘다 나온다.
  
  printf("개행문자 n 를 다 썼으면 다시 scanf 쓸 수 있다 :");
  scanf("%s",c);
  printf("%s\n",c);
  return 0;
}
// 해결방식은 간단하다. 그냥 "s" 써서 없애는게 최고