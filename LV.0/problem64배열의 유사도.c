#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// s1_len�� �迭 s1�� �����Դϴ�.
// s2_len�� �迭 s2�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int compare(const char* s1, char* s2) {
    for (int i = 0; 1; i++) {
        if (s1[i] == s2[i]) {
            if (s1[i] == '\0')return 1;
        }
        else return 0;
    }
    return 0;
}

int solution(const char* s1[], size_t s1_len, const char* s2[], size_t s2_len) {
    int answer = 0;
    for (int i = 0; i < s1_len; i++) {
        for (int j = 0; j < s2_len; j++) {
            if (compare(s1[i], s2[j]))answer++;
        }
    }


    return answer;
}