#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    int* answer = (int*)calloc(num2 + 1 - num1, sizeof(int));
    int index = 0;
    for (int i = num1; i <= num2; i++) {
        answer[index] = numbers[i];
        index++;
    }
    return answer;
}