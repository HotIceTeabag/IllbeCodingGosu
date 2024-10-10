#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int high = -1, index = 0;
    for (int i = 0; i < 3; i++) {
        if (sides[i] > high) {
            high = sides[i];
            index = i;
        }
    }

    int another = 0;
    for (int i = 0; i < 3; i++) {
        if (i != index)another = another + sides[i];
    }
    if (another > high)return 1;
    return 2;
}