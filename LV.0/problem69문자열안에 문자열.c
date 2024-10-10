#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int len1 = 0, len2 = 0;
    for (len1 = 0; str1[len1] != '\0'; len1++);
    for (len2 = 0; str2[len2] != '\0'; len2++);
    int count = 0;
    for (int i = 0; i < len1; i++) {
        if (str1[i] == str2[0]) {
            for (int j = 0; j < len2; j++) {
                if (str1[i + j] == '\0')return 2;
                if (str1[i + j] != str2[j])break;
                if (str2[j + 1] == '\0' && str1[i + j] == str2[j])return 1;
            }
        }
        if (count == len2)return 1;
        count = 0;
    }
    return 2;
}