/*
 * @Description: 假设一堆由1分、2分、5分组成的n个硬币总面值为m分，
 * 求一共有多少种可能的组合方式（某种面值的硬币可以数量可以为0）
 * @Author: cheny
 * @Date: 2020-01-04 13:29:53
 * @LastEditor: cheny
 * @LastEditTime : 2020-01-04 13:46:18
 * @FilePath: \C_code\TestCode\C.CPP\Practicing\13_coinNum.c
 */

#include <stdio.h>

void coinProblem(int n, int m){
    int ans = 0;
    for(int i = 0; i <= n; ++ i){
        for(int j = 0; j <= n; ++j){
            for(int k = 0; k <= n; ++k){
                if((i + 2*j + 5*k) == m && (i + j + k)== n){
                    ans ++;
                }
            }
        }
    }
    printf("%d", ans);
}

int main(){
    int n = 3;
    int m = 10;
    coinProblem(n, m);

    return 0;
}