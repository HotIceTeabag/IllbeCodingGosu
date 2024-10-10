#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int compare(char a, char* b, int len);
char moum[6] = { 'a','e','i','o','u' };

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int len = 0;
    int aei = 0;
    for (len; my_string[len] != '\0'; len++);
    for (int i = 0; i < len; i++) if (compare(my_string[i], moum, 5) == 1)aei++;

    char* answer = (char*)malloc(sizeof(char) * (len + 1 - aei));

    answer[len - aei] = '\0';

    int index = 0;
    for (int i = 0; i < len; i++) {
        if (compare(my_string[i], moum, 5) != 1) {
            answer[index] = my_string[i];
            index++;
        }
    }
    return answer;
}

int compare(char a, char* b, int len) {
    for (int i = 0; i < len; i++) {
        if (a == b[i])return 1;
    }
    return 0;
}