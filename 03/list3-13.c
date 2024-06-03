#include <stdio.h>
int main(void){
    int a,n,s;

    puts("三つの整数を入力せよ。");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&n);
    printf("整数3:");
    scanf("%d",&s);

    int max=a;  /*aをmaxに入れる*/
    if(n>max){
        max=n;   /*nとmax比べてmax入れる*/
        }
        
    if (s>max){
        max=s;  /*sとmaxで比べてmax入れる*/
        }

    printf("最大値は%dです。\n",max);

    return 0;

}