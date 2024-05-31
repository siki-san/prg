#include <stdio.h>
int main(void){
    int a;

    printf("整数を入力せよ。:");
    scanf("%d",&a);

    if((a%10)==5){
        printf("最下位の桁は5です。");
    }else{
        printf("最下位の桁は5ではありません。");
    }

    return 0;
}