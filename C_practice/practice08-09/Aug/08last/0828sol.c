#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 10

int isDuplicate(int arr[], int num, int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            return 1; // 중복된 숫자가 있음
        }
    }
    return 0; // 중복된 숫자가 없음
}

void fillUniqueArray(int arr[], int size, int range) {
    srand(time(NULL));

    for (int i = 0; i < size; i++) {
        int num;
        do {
            num = rand() % range;
        } while (isDuplicate(arr, num, i)); // 중복 검사
        arr[i] = num;
    }
}

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