#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num1, int num2) {
    num1 = num1 * 1000;
    int answer = num1 / num2;
    return answer;
}