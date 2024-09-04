/*読み込んだ整数値は0かどうか*/
#include <stdio.h>
int main(void){
    int n;

    printf("整数を入力してください：");
    scanf("%d",&n);

    if(n){
        puts("その整数値は0ではありません");
    }else{
        puts("その整数値は0です。");
    }

    return 0;
}

