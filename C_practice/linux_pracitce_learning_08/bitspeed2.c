#include <stdio.h>

#define M 0b1
#define T 0b10
#define W 0b100
#define H 0b1000
#define F 0b10000

int main() {
	    char a;
	        printf("오늘의 날짜는?: ");
		    scanf("%c", &a);

		        switch (a) {
				        case 'M':
						            a = M;
							                break;
									        case 'T':
									            a = T;
										                break;
												        case 'W':
												            a = W;
													                break;
															        case 'H':
															            a = H;
																                break;
																		        case 'F':
																		            a = F;
																			                break;
																					        default:
																					            a = 0;
																						                break;
																								    }

			    printf("축하합니다. %d 점을 얻었습니다.\n", a);
			        return 0;
}

