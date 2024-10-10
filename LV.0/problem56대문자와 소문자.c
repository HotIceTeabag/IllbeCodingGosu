#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    int leng;
    for (leng = 0; my_string[leng] != '\0'; leng++);

    char* answer = (char*)malloc(sizeof(char) * (leng + 1));

    for (int i = 0; i < leng; i++)answer[i] = my_string[i];
    answer[leng] = '\0';

    for (int i = 0; answer[i] != '\0'; i++) {
        if (my_string[i] >= 'a' && my_string[i] <= 'z')answer[i] = answer[i] - ('a' - 'A');
        else answer[i] = answer[i] + ('a' - 'A');
    }

    return answer;
}