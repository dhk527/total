#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stddef.h>

#include "duplica.h"


int isDuplicate(int arr[], int num, int size); 
void fillUniqueArray(int arr[], int size, int range);


int main() {
    int uniqueArray[ARRAY_SIZE];
    fillUniqueArray(uniqueArray, ARRAY_SIZE, 20);

    printf("Unique Array:\n");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", uniqueArray[i]);
    }
    printf("\n");

    return 0;
}