#include <stdio.h>
int main(void){
int n1,n2,n3,wa;

printf("３つの整数を入力してください。\n");
printf("整数n1:");
scanf("%d",&n1);
printf("整数n2:");
scanf("%d",&n2);
printf("整数n3:");
scanf("%d",&n3);

wa=n1+n2+n3;
printf("それらの和は%dです。\n",wa);


}