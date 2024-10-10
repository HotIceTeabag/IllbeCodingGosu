#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dot_len은 배열 dot의 길이입니다.
int solution(int dot[], size_t dot_len) {
    if (dot[0] > 0) {
        if (dot[1] > 0)return 1;
        return 4;
    }
    else {
        if (dot[1] > 0)return 2;
        return 3;
    }
}