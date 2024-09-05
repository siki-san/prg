/*読み込んだ整数値を3でわった剰余を表示する*/ 
#include <stdio.h>
int main(void){
    int n;

    printf("整数を入力してください。：");
    scanf("%d",&n);

    switch(n % 3){
        case 0 :/*ラベル*/ puts("3で割り切れます");    break;
        case 1 : puts("3で割った剰余は1です");    break;
        case 2 : puts("3で割った剰余は2です");    break;
    }
        
        return 0;
    }
