#include <stdio.h>
int main(void){
    int a,b;

    puts("二つの整数を入力せよ。:");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2");
    scanf("%d",&b);

    if(a!=b){
        puts("それらの値は違います。");
    }else{
        puts("それらの値は同じです。");
    }
    
    return 0;

}