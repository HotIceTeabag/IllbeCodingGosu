#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, int num1, int num2) {
    int len = 0;
    for (len; my_string[len] != '\0'; len++);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++)answer[i] = my_string[i];
    answer[len] = '\0';
    char temp;
    temp = answer[num1];
    answer[num1] = answer[num2];
    answer[num2] = temp;
    return answer;
}