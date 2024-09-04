/*読み込んだ整数値は奇数か*/ 
#include <stdio.h>
int main(void){
    int n;

    printf("整数を入力して下さい。:");
    scanf("%d",&n);

    if(n % 2){
        printf("入力された数字は奇数です。");
    }else{
        printf("入力された数字は偶数です。");
    }

    return 0;

}