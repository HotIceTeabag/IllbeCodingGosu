#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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