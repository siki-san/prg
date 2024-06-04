#include <stdio.h>
int main(void){
    int n;

    printf("整数値:");
    scanf("%d",&n);

    if(n%3 == 0){
        printf("3で割り切れます。");
    }else if(n%3 == 1){
        printf("3で割った余りは1です。");
    }else{
        printf("3で割った余りは2です。");
    }

    return 0;
}