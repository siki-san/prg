/*整数と浮動小数点*/
#include <stdio.h>
int main(void){
int n;
double x;

n = 9.99;
x = 9.99;

printf("int型変数nの値:%d\n",n);
printf("int型変数n/2の値:%d\n",n/2);

printf("double型変数xの値:%lf\n",x);
printf("double型変数x/2.0の値:%lf\n",x/2);

return 0;
}