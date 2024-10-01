#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int temp, answer;
    for (int i = 0; i < numbers_len - 1; i++) {
        for (int j = 0; j < numbers_len - i - 1; j++) {
            if (numbers[j] < numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    answer = numbers[0] * numbers[1];
    return answer;
}