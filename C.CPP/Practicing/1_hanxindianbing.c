/*
 * @Description: 韩信点兵问题
 * @Author: chenxi
 * @Date: 2020-01-01 19:26:40
 * @LastEditor: chenxi
 * @LastEditTime : 2020-01-03 12:26:18
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\1_hanxindianbing.c
 */

#include <stdio.h>

/*
输入
输入3个非负整数a,b,c ，表示每种队形排尾的人数（a<3,b<5,c<7）。
例如,输入：2 4 5
输出
输出总人数的最小值（或报告无解，即输出No answer）。
实例，输出：89
*/
/**
 * @description: 
 * @param {type} 
 * @return: 
 */
void hanxindianbing(int a, int b, int c){
    int i;
    if(a < 3&&b < 5&&c < 7){
        for(i = 100; i >= 10; --i){
            if(i % 3 == a && i % 5 == b && i % 7 == c){
                printf("报告：【队伍一共有%d人】", i);
                printf("\n");
                break;
            }
        }
        if(i < 10){
            printf("No answer!\n");
        }   
    }else{
        printf("输入错误！");
    }
}

int main(){
    int a, b, c;
    printf("请输入每一种队形队尾剩余人数（a<3,b<5,c<7）：");
    scanf("%d%d%d", &a, &b, &c);
    hanxindianbing(a, b, c);
    return 0;
}