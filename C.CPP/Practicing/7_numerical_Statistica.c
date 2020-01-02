//统计给定的n个数中，负数、零和正数的个数
#include <stdio.h>
void numerical_Statistic(int *a, int length){
    int zero = 0;
    int positive = 0;
    int negative = 0;
    for(int i = 0; i < length; ++i){
        if(a[i] == 0){
            zero ++;
        }
        if(a[i] < 0){
            negative ++;
        }
        if(a[i] > 0){
            positive ++;
        }
    }
    printf("%d %d %d", zero, negative, positive);
}

int main(){
    int a[5] = {1, -1, 0, 0, 1};
    int length = sizeof(a)/sizeof(int);
    //printf("%d", length);
    numerical_Statistic(a, length);
    return 0;
}