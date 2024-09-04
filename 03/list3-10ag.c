/*読み込んだ整数値が正であれば偶数、奇数の別を判別して表示する*/

#include<stdio.h>
int main(void){
    int n;

    printf("整数を入力してください:");
    scanf("%d",&n);

    if(n >= 0){
        if(n % 2){
            printf("その数字は奇数です。");
        }else{
            printf("その数字は偶数です。");
        }
    }else{
        puts("正の整数を入力してください");
    }
    return 0;

}
