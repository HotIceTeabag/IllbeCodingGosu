#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = n / 7;
    if ((answer * 7) < n)answer++;
    return answer;
}