#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len�� �迭 num_list�� �����Դϴ�.
int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < 2; i++)answer[i] = 0;
    for (int i = 0; i < num_list_len; i++) {
        if ((num_list[i] % 2) == 0 || num_list[i] == 0) {
            answer[0]++;
        }
        else answer[1]++;
    }
    return answer;
}