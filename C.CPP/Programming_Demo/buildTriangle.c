#include <stdio.h>

void buildTriangle(int n){//����һ��ֱ��������right triangle
    for(int i = 0; i < n; ++i){
        //printf("\n");
        /*for(int j = i; j < n; ++j){//�����һ������ֱ��������
            printf("*");
        }*/
        for(int j = 0; j < i + 1; ++j){//���һ�����ŵ�ֱ��������
            printf("*");
        }printf("\n");
    }
}

int main(){
    int n;
    printf("���������δ�С��С���Ǹ�������");
    scanf("%d", &n);
    buildTriangle(n);
    return 0;
}