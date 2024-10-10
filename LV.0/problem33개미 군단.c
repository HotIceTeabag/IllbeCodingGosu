#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int health = hp;
    int answer = 0;
    for (int i = 0; 1; i++) {
        if (health >= 5) {
            health -= 5;
            answer++;
        }
        else if (health >= 3) {
            health -= 3;
            answer++;
        }
        else if (health >= 1) {
            health -= 1;
            answer++;
        }
        else return answer;
    }
    return answer;
}