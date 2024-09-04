/*読み込んだ2つの整数値の大きい方の値を表示*/
#include <stdio.h>
int main(void){
    int n1,n2;

    puts("二つの整数を入力してください");
    printf("整数1:");
    scanf("%d",&n1);
    printf("整数2:");
    scanf("%d",&n2);

    int max = n1 > n2 ? n1 : n2;  /*n1>n2であればn1、そうでなければn2*/
    printf("大きい方の値は%dです。\n",max);

    return 0;

}