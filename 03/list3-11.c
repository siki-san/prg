#include <stdio.h>
int main(void){
int n1,n2;

printf("二つの整数を入力せよ。\n");

printf("整数1:");
scanf("%d",&n1);
printf("整数2:");
scanf("%d",&n2);

if(n1>n2){
    printf("大きい方の値は%dです。\n",n1);
}else{
    printf("大きい方の値は%dです。\n",n2);
}

return 0;
}