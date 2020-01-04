/*
 * @Description: 奇偶分离
 * @Author: cheny
 * @Date: 2020-01-04 12:55:03
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-04 13:01:11
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\11_oddAndEvenNumSeparate.c
 */
#include <stdio.h>

void oddEvenSeparate(int n){
    for(int i = 1; i <= n; ++i){
        if(i % 2 == 0){
            printf("%d ", i);
        }
    }
    printf("\n");
    for(int j = 1; j <= n; ++j){
        if(j % 2 == 1){
            printf("%d ", j);
        }
    }
}

int main(){
    int n = 10;
    oddEvenSeparate(n);
    return 0;
}