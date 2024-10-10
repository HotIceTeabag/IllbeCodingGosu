#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* solution(const char* my_string, int n) {
    int len;
    for (len = 0; my_string[len] != '\0'; len++);
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char* answer = (char*)malloc(sizeof(char) * ((len * n) + 1));
    int index = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < n; j++) {
            answer[index] = my_string[i];
            index++;
        }
    }
    answer[len * n] = '\0';
    return answer;
}