#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int solution(const char* my_string) {
    int answer = 0;
    for (int i = 0; my_string[i] != '\0'; i++) {
        if (my_string[i] >= 48 && my_string[i] <= 57)answer = answer + my_string[i] - 48;
    }
    return answer;
}