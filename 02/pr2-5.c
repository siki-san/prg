#include <stdio.h>

int main(void){
double a,b;
printf("二つの整数を入力せよ。\n");
printf("整数a:");
scanf("%lf",&a);
printf("整数b:");
scanf("%lf",&b);

printf("aの値はbの%lf%%です。",(a/b)*100);

return 0;

}