#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    if (n == 1 || n == 4)return 1;
    for (int i = 1; i < n / 2; i++) {
        if (i * i == n)return 1;
    }
    return 2;
}