#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string) {
    int len = 0;
    for (int i = 0; my_string[i] != '\0'; i++)len++;
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++) answer[i] = my_string[len - 1 - i];
    answer[len] = '\0';
    return answer;
}