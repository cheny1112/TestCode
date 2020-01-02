#include <stdio.h>

void buildTriangle(int n){//构建一个直角三角形right triangle
    for(int i = 0; i < n; ++i){
        //printf("\n");
        /*for(int j = i; j < n; ++j){//输出是一个倒得直角三角形
            printf("*");
        }*/
        for(int j = 0; j < i + 1; ++j){//输出一个正着的直角三角形
            printf("*");
        }printf("\n");
    }
}

int main(){
    int n;
    printf("输入三角形大小（小星星个数）：");
    scanf("%d", &n);
    buildTriangle(n);
    return 0;
}