#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// strlist_len�� �迭 strlist�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int* solution(const char* strlist[], size_t strlist_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int len;
    int* answer = (int*)calloc(strlist_len, sizeof(int));

    for (int i = 0; i < strlist_len; i++) {
        for (len = 0; strlist[i][len] != '\0'; len++)answer[i]++;
    }

    return answer;
}