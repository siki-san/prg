/*読み込んだ整数値は5で割り切れないか割り切れるのか*/

#include <stdio.h>
int main(void){

    int n;

    printf("整数を入力してください：");
    scanf("%d",&n);

    if(n % 5){
        printf("その数は5で割りきれません");
    }else{
        printf("その数は5で割り切れます");
    }

    return 0;
}
