#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n * 6; i++) {
        if (((n * i) % 6 == 0))return n * i / 6;
    }
    return answer;
}