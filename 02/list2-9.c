#include <stdio.h>
int main(void){
double a,b;

puts("二つの整数を入力せよ。");
printf("整数a:");
scanf("%lf",&a);
printf("整数b:");
scanf("%lf",&b);


printf("それらの平均は%lfです。\n",(a+b)/2);

return 0;

}