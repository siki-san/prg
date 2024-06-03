#include <stdio.h>
int main(void){
    int n,m;

    puts("二つの整数を入力せよ。");
    printf("整数A:");
    scanf("%d",&n);
    printf("整数B:");
    scanf("%d",&m);

    if(n==m){
        puts("AとBは等しいです。");
    }else if(n>m){
        puts("AはBより大きいです。");
    }else{
        puts("AはBより小さいです。");
    }

    return 0;

}