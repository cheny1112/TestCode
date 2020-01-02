//比较两个字符对应ASCII码的大小
#include <stdio.h>

void ASCII_Code_Compare(char a, char b){
    int a1 = (int)a;
    int b1 = (int)b;
    if(a1 < b1){
        printf("%c%d小于%c%d",a, a1, b, b1);
    }else{
        printf("%c%d大于%c%d",a, a1, b, b1);
    } 
}

int main(){
    char a;
    char b;
    scanf("%c %c", &a, &b);
    //int b1 = (int)b;
    ASCII_Code_Compare(a, b);
    //printf("%d", b1);
    return 0;
}