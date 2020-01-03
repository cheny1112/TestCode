/*
 * @Description: 
 * @Author: chenxi
 * @Date: 2020-01-02 16:50:14
 * @LastEditor: chenxi
 * @LastEditTime : 2020-01-03 12:40:23
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\3_jinzhizhuanhuan.c
 */

//进制转换
//输入 
//输入数据包含多个测试实例，
//每个测试实例包含两个整数N(32位整数)和R（2<=R<=16, R<>10）。

//输出 
//为每个测试实例输出转换后的数，每个输出占一行。
//如果R大于10，则对应的数字规则参考16进制（比如，10用A表示，等等）。
#include <stdio.h>
#include <stdlib.h>
//初步，转换成2进制
void jinzhizhuanhuan(int n, int r){//十进制数n, 待转换进制r（2<r<16）
    int array[10];
    int i = 0;
    int j = 0;
    if(n <= 1){
        while(r != 1){
            printf("0");
            --r;
        }
        printf("%d", n);
    }else{
        while(n != 0){
            array[i] = n % r;
            i ++;
            n = n / r;
        }
        for(j = i - 1; j >= 0; --j){
            printf("%d", array[j]);
        }
    }
}

int main(){
    int n, r;
    scanf("%d%d", &n, &r);
    jinzhizhuanhuan(n, r);

    return 0;
}