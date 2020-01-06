/*
 * @Description: 判断一个文本是否是汉字
 * @Author: cheny
 * @Date: 2020-01-05 10:57:02
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-06 21:14:46
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\14_isChinese.c
 */

#include <stdio.h>

void isChinese(){
    int amount = 0;
    char c;
    getchar();

    while((c = getchar()) != '\n'){
        if(c < 0 || c > 127){
        amount ++;
        }
    }
    printf("%d", amount/2);
}

int main(){
    isChinese();

    return 0;
}


