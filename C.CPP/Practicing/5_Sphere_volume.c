#include <stdio.h>
//计算球体体积
#define pi 3.14
void sphere_V(int r){
    float ans = r*r*r*pi/3;
    printf("%.2f", ans);
}

int main(){
    int r;
    scanf("%d", &r);
    sphere_V(r);

    return 0;
}