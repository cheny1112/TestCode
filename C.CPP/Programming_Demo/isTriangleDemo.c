#include <stdio.h>
//有bug
void func(){//判断三角形
    int i,a,b,c;
    scanf("%d%d%d", &a, &b, &c);
        if(a*a + b*b >= c*c){
            printf("1\n");
        }else{
            printf("0\n");
        }
}

int main(){
    func();
    return 0;
}