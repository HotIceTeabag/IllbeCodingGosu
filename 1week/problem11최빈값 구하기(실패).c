#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct aha{
    int number;
    int count;
} aha;

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int temp;
    for(int i = 0; i < array_len - 1; i++){
        for(int j = 0; j<array_len - (i+1); j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    aha* arr = (aha*)malloc(sizeof(aha)*(array_len+1));
    aha* ptr = arr;
    for(int i = 0; i < array_len+1; i++){
        arr[i].count = 0;
        arr[i].number = -1;
    }
    for(int i = 0; i < array_len; i++){
        if(arr->number == -1)arr->number = array[i];
        if(array[i] == arr->number)arr->count++;
        else arr++;
    }
    int high = 0, duplicate = 0, high_num;
    while(ptr->number != -1){
        if(ptr->count > high){
            high = ptr->count;
            high_num = ptr->number;
            duplicate = 0;
        }else if(ptr->count == high){
            duplicate = 1;
        }
        ptr++;
    }
    if(duplicate == 1) return -1;
    return high_num;
}