#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int number;
    int count;
}twin;

// array_len은 배열 array의 길이입니다.
int* solution(int array[], size_t array_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    twin a;
    a.number = 0;
    a.count = 0;
    int* answer = (int*)calloc(2, sizeof(int));
    for (int i = 0; i < array_len; i++) {
        if (a.number < array[i]) {
            a.number = array[i];
            a.count = i;
        }
    }
    answer[0] = a.number;
    answer[1] = a.count;
    return answer;
}