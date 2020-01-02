#include <stdio.h>
//计算绝对值
void absoluteTransfer(int a){
    if(a >= 0){
        printf("%d", a);
    }else{
        printf("%d", -a);
    }
}

int main(){
    int a;
    scanf("%d", &a);
    absoluteTransfer(a);
    return 0;
}