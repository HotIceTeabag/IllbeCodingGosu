#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len�� �迭 numbers�� �����Դϴ�.
double solution(int numbers[], size_t numbers_len) {
    double answer = 0;
    for (int i = 0; i < numbers_len; i++) {
        answer += numbers[i];
    }
    answer = answer / numbers_len;
    return answer;
}