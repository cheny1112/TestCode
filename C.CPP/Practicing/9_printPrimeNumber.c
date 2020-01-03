/*
 * @Description: 打印素数
 * @Author: cheny
 * @Date: 2020-01-03 16:41:57
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-03 19:46:16
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\9_isPrimeNumber.c
 */

#include <stdio.h>

void isPrimeNumber(int n){
    for(int i = 2; i < n; ++i){
        if(n % i == 0){
            printf("%d不是素数 ", n);
            break;
        }
        if(i == n - 1 && n % (n - 1) != 0){
            printf("%d是素数 ", n);
            break;
        }
    }
}

void printPrimeNumber(int N){
    for(int i = 3; i <= N; ++i){
        isPrimeNumber(i);
    }
}

int main(){
    int N = 15;
    printPrimeNumber(N);

    return 0;
}