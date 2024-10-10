#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
양수 두 개면 양수
음수의 곱도 음수
양수가 하나고 나머진 다 음수면?
-> 하나의 양수와 가장 큰 음수의 곱이 최댓값?
음수의 곱이 최댓값이 되겠지
*/

typedef struct {
    int number[2];
}twin;

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int temp;
    for (int i = 0; i < numbers_len - 1; i++) {
        for (int j = 0; j < numbers_len - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    if (numbers[0] * numbers[1] > numbers[numbers_len - 1] * numbers[numbers_len - 2]) {
        return numbers[0] * numbers[1];
    }
    else return numbers[numbers_len - 1] * numbers[numbers_len - 2];
    //0번째는 가장 큰 수 2개, 1번째는 가장 작은 음수 두 개
}