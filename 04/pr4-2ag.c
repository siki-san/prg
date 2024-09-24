#include <stdio.h>

int main(void){
    int n, m, i = 0;
    int sum = 0;

    printf("二つの整数を入力してください。:\n");
    printf("整数a:");
    scanf("%d",&n);
    printf("整数b:");
    scanf("%d",&m);

    for(i = n; i <= m; i++){
        sum += i;
    }

    printf("%d以上%d以下の全整数の和は%dです。",n,m,sum);

    return 0;

}
