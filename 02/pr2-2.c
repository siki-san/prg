#include <stdio.h>
int main(void){
int a,b;

printf("二つの整数を入力してください。\n");
printf("整数a:");
scanf("%d",&a);
printf("整数b:");
scanf("%d",&b);

printf("それらの和は%dで積は%dです。",a+b,a*b);

return 0;
}