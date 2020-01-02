#include <stdio.h>

int main(){
    int a = 100;
    int *p = &a;
    //说明： 指针型变量p，本身就是地址变量，所以不用加取址符
    //printf("%#X, %#X\n", p, &a);
    //说明： 加上取址符时，此时代表“指针的指针”，即指针变量的地址通过输出我们
    //可以看出区别
    //printf("%#X, %#X\n", &p, &a);
    //printf("%d\n", p);注意观察十一行和十二行代码输出的区别
    printf("%d\n", *p);
    return 0;
}