#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* rsp) {
    int len = 0;
    for (len; rsp[len] != '\0'; len++);
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    answer[len] = '\0';
    for (int i = 0; i < len; i++) {
        if (rsp[i] == '2')answer[i] = '0';
        else if (rsp[i] == '0')answer[i] = '5';
        else answer[i] = '2';
    }
    return answer;
}