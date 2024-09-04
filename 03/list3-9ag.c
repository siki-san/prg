/*読み込んだ整数値の符号を判定する*/
#include<stdio.h>
int main(void){
    int n;

    printf("整数値を入力してください\n");
    scanf("%d",&n);

    if(n == 0){
        printf("その数は0です。");
    }else if(n>0){
        printf("その数は正です。");
    }else{
        printf("その数は負です。");
    }

    return 0;

}