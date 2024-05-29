#include <stdio.h>
int main(void){
double x,y;

printf("二つの実数を入力せよ。\n");
printf("実数x:");
scanf("%lf",&x);
printf("実数y:");
scanf("%lf",&y);

printf("x+y=%f\n",x+y);
printf("x-y=%f\n",x-y);
printf("x*y=%f\n",x*y);
printf("x/y=%f\n",x/y);

return 0;


}