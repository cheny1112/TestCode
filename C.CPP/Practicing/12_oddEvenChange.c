/*
 * @Description: 字符串奇偶位互换
 * @Author: cheny
 * @Date: 2020-01-04 13:12:03
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-04 13:28:58
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\12_oddEvenChange.c
 */

#include <stdio.h>

/**
 * @description: 字符串数组奇偶位互换
 * @param {type} 
 * @return: 
 */
void oddEvenChange(char *a, int length){
    int temp;
    for(int i = 0; i < length; ++ i){
        if((i + 1) % 2 == 0){
            temp = a[i - 1];
            a[i - 1] = a[i];
            a[i] = temp;
        }
    }
    for(int j = 0; j < length; ++j){
        printf("%c ", a[j]);
    }
}

int main(){
    char a[4] = {'a', 'b', 'c', 'd'};
    int length = sizeof(a)/sizeof(char);
    oddEvenChange(a, length);

    return 0;
}