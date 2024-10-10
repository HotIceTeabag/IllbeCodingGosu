#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, const char* letter) {
    int len = 0, count = 0;
    for (len; my_string[len] != '\0'; len++) {
        if (my_string[len] == *letter)count++;
    }
    char* answer = (char*)malloc(sizeof(char) * (len - count + 1));
    answer[len - count] = '\0';

    int index = 0;
    for (int i = 0; i < len; i++) {
        if (my_string[i] != *letter) {
            answer[index] = my_string[i];
            index++;
        }
    }
    return answer;
}