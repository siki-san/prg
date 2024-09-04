#include <stdio.h>
int main(void){
    int n;

    printf("整数を入力せよ。：");
    scanf("%d",&n); /*scanfで読み込む*/

    if(n % 5){  /*if文の中は0でなければ実行する*/
    puts("その数は5で割り切れません.");
}
    return 0;
}