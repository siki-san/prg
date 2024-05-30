#include <stdio.h>
int main(void){

int a;
double n;
printf("身長を入力せよ。：");
scanf("%d",&a);

n = (a-100)*0.9;
printf("標準体重は%0.1fです。",n);

return 0;
}