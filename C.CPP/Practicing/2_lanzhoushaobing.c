/*
 * @Author: chenxi
 * @Date: 2020-01-02 15:43:32
 * @LastEditor: chenxi
 * @LastEditTime : 2020-01-03 12:20:19
 * @Description: 
 */
//兰州烧饼
//烧饼有两面，要做好一个兰州烧饼，要两面都弄热。
//当然，一次只能弄一个的话，效率就太低了。
//有这么一个大平底锅，一次可以同时放入k个兰州烧饼，
//一分钟能做好一面。而现在有n个兰州烧饼，至少需要多少分钟才能全部做好呢？

//输入 依次输入n和k，中间以空格分隔，其中1 <= k,n <= 100000

//输出 输出全部做好至少需要的分钟数

//提示 如样例，三个兰州烧饼编号a,b,c，首先a和b，然后a和c，最后b和c，3分钟完成

#include <stdio.h>
#include <math.h>
//k 代表一个锅最多放多少个烧饼
//n 代表要做的烧饼数量
//一个烧饼要两分钟，那么
void lanzhoushaobing(int k, int n){
    int ans;
    if(k >= n){
        printf("需要：2分钟");
    }else{
        ans = (n * 2)/k;
        if((n * 2) % k != 0){
            ans ++;
        }
        printf("需要：%d分钟", ans);
    }
}

int main(){
    int k, n;
    scanf("%d%d", &k, &n);
    lanzhoushaobing(k, n);
    return 0;
}