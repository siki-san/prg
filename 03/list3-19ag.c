/*読み込んだ整数値を3でわった剰余を表示する*/ 
#include <stdio.h>
int main(void){
    int n;

    printf("整数を入力してください。：");
    scanf("%d",&n);

    if(n % 3 == 0){
        puts("3で割り切れます.");
    }else if(n % 3 == 1){
        puts("3で割った剰余は1です");
    }else{
        puts("3で割った剰余は2です");
    }
        
        return 0;
    }

