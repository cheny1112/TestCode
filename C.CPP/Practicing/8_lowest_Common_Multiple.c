/*
 * @Description: 最小公倍数
 * @Author: cheny
 * @Date: 2020-01-03 13:24:00
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-03 16:32:10
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\8_lowest_Common_Multiple.c
 */

#include <stdio.h>

void get_LCM(int a, int b){
    int temp;
    int remender;
    int A = a;
    int B = b;
    if(a < b){
        temp = a;
        a = b;
        b = temp;
    }
    //?while(a % b) = while(a % b != 0)
    while(a % b){//!思路是用两数之积除以最小公倍数
        remender = a % b;
        a = b;
        b = remender;
    }
    printf("最小公倍数为:%d", A * B / b);
}

int main(){
    int a = 9;
    int b = 6;
    get_LCM(a, b);
    return 0;
}