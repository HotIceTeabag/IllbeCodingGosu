#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
/*
��� �� ���� ���
������ ���� ����
����� �ϳ��� ������ �� ������?
-> �ϳ��� ����� ���� ū ������ ���� �ִ�?
������ ���� �ִ��� �ǰ���
*/

typedef struct {
    int number[2];
}twin;

// numbers_len�� �迭 numbers�� �����Դϴ�.
int solution(int numbers[], size_t numbers_len) {
    int temp;
    for (int i = 0; i < numbers_len - 1; i++) {
        for (int j = 0; j < numbers_len - 1 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    if (numbers[0] * numbers[1] > numbers[numbers_len - 1] * numbers[numbers_len - 2]) {
        return numbers[0] * numbers[1];
    }
    else return numbers[numbers_len - 1] * numbers[numbers_len - 2];
    //0��°�� ���� ū �� 2��, 1��°�� ���� ���� ���� �� ��
}