#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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