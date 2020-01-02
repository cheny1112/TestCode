#include <stdio.h>

void bubleSort(int *arr, int length){//get a array form main
    int temp = 0;
    for(int i = 0; i < length; ++i){
        for(int j = i + 1; j < length; ++j){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int a[5] = {0, 3, 2, 4, 1}; 
    int length = sizeof(a) / sizeof(int);
    bubleSort(a, length);
    for(int i = 0; i < sizeof(a) / sizeof(a[0]); ++i){
        printf("%d ", a[i]);
    }
    //printf("%d", length);
    return 0;
}