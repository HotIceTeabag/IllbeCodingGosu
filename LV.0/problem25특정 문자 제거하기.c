#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
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