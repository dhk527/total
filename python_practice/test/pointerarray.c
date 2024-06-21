#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int SIZE = 8;
    // 1차원 배열 정의 (요소당 8비트)
    unsigned char array[64]= {
    0b00000001, 0b00000010, 0b00000011, 0b00000100,
    0b00000101, 0b00000110, 0b00000111, 0b00001000,
    0b00001001, 0b00001010, 0b00001011, 0b00001100,
    0b00001101, 0b00001110, 0b00001111, 0b00010000,
    0b00010001, 0b00010010, 0b00010011, 0b00010100,
    0b00010101, 0b00010110, 0b00010111, 0b00011000,
    0b00011001, 0b00011010, 0b00011011, 0b00011100,
    0b00011101, 0b00011110, 0b00011111, 0b00100000
	};
	int headersize=SIZE * SIZE;
	int offset=3;
for(int j=0; j<4;j++){	
    for (int i = 0; i < 8; i++) {
        printf("%d " , array[j*SIZE+i]);
    }
	puts("\n");
};
puts("---------------------");
	for(int i=0; i<8 ; i++)
	{
		array[rand()%(32-offset-1)]^= 1<<rand()%8;
	}
	
for(int j=0; j<4;j++){	
    for (int i = 0; i <8; i++) {
        printf("%d ", array[j*SIZE+i]);
    }
	puts("\n");
};

	

	return 0;

}
