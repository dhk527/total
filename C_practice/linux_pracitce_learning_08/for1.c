#include <stdio.h>

int main(){

	//구구단 1단에서 9단까지 20단 까지?
	for(int i = 1; i <=9 ; i++){
				printf("[%d]단\n   ", i);


	for ( int j=1 ; j <=20 ; j++ ) {
			
					if(j% 2==0){ //"%2 == 1,0 중 하나가 홀 짝 나타내는 것" 홀수로 나타낼 수 있다 나머지니까 나누기 2해서 1이 되므로{	
				// continue가 없으면  if( j%2 == 1)이 되어야 한다.	
		
		
					continue} // "continue"는 for문을 한번 더 돌리는 것이다.


						//
						//"break" 는 for문을 탈출 하는 것을 말한다.
//
// "break"를 쓸려면 if( j > 5){break;} 하게 되면 for문을 끝내는 것이다.
//
				printf(" %d * %d = %d\n" ,i,j,i*j);
				
						}

				}
	
		}
	}

