#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct {
    int number;
    int count;
}twin;

// array_len�� �迭 array�� �����Դϴ�.
int* solution(int array[], size_t array_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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