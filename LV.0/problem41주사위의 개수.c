#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 0;
    int x = box[0] / n, y = box[1] / n, z = box[2] / n;
    answer = x * y * z;
    return answer;
}