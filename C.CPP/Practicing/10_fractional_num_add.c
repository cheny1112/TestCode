/*
 * @Description: 分数相加
 * @Author: cheny
 * @Date: 2020-01-03 17:17:16
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-03 19:13:38
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\10_fractional_num_add.c
 */

#include <stdio.h>


int get_LCM(int a, int b){
    int temp;
    int remender;
    int A = a;
    int B = b;
    int ans;
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
    ans = A * B / b;
    //printf("最小公倍数为:%d", ans);

    return ans;
}
/**
 * @description: 给定两个分数，输出这两个分数的和，并用分数形式表示。
 * @param {a-分数一的分子，b-分数一的分母，} 
 * @return: 0
 */
void fractionalNumAdd(int a, int b, int c, int d){
    int lcm = get_LCM(b, d);
    //printf("%d", get_LCM(b, d));
    int a1 = lcm / b;
    int c1 = lcm / d;
    int ans = a1*a + c1*c;
    printf("%d/%d", ans, lcm);
}

int main(){
    int a = 3, b = 18, c = 1, d = 9;
    fractionalNumAdd(a, b, c, d);

    return 0;
}