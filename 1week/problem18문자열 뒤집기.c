#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int len = 0;
    for (int i = 0; my_string[i] != '\0'; i++)len++;
    char* answer = (char*)malloc(sizeof(char) * (len + 1));
    for (int i = 0; i < len; i++) answer[i] = my_string[len - 1 - i];
    answer[len] = '\0';
    return answer;
}