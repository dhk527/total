#include <stdio.h> /* 입출력함수 printf, scanf의 사용을 위해 */



int main(void) {
  int x, y, result; /* int형 변수 3개 선언 */
  printf("x값 입력\n");

  /* & 연산자의 의미는, '포인터'에 관련된 것이라고 생각합니다.

     x 라는 변수가 있는 곳에 scanf가 키보드(standard input)

       로부터 입력된 값을 넣어준다는 느낌이라고 생각합니다. */

  scanf("%d", &x);
  printf("y값 입력\n");

  scanf("%d", &y);
  result = x + y;
  
  printf("%d", result);
  return 0; /* 프로그램의 정상 종료 */

}