#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    int arr_len;
    if (n % 2 == 0)arr_len = n / 2;
    else arr_len = (n + 1) / 2;
    int* answer = (int*)malloc(sizeof(int) * arr_len);
    for (int i = 0; i < arr_len; i++) {
        answer[i] = -1 + 2 * (i + 1);
    }
    return answer;
}