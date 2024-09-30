#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numer1, int denom1, int numer2, int denom2) {
    int numer, denom, highnum, justnum;
    numer = numer1*denom2 + numer2*denom1;
    denom = denom1*denom2;
    int high,low,temp,bigD = 0;;
    if(numer-denom<0){//denom이 더 크면
        bigD=1;
        high = denom;
        low = numer;
    } else{
        high = numer;
        low = denom;
    }
    temp=high%low;
    while(1){
        if(temp==0)break;
        
    }
    int* answer = (int*)malloc(sizeof(int)*2);
    answer[0] = numer/highnum;
    answer[1] = denom/highnum;
    return answer;
}