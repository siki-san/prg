#include <stdio.h>
int main(void){
    int ya;
    printf("整数を入力してください：");
    scanf("%d",&ya);

    printf("%dから7を減じると%dです。\n",ya,ya-7);

    return 0;
}