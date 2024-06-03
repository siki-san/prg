#include <stdio.h>
int main(void){
    int a,b,c,min;

    printf("３つの整数を入力して下さい。\n");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    printf("整数3:");
    scanf("%d",&c);

    min=a;
    if(min>b){
        min=b;
    }if(min>c){
        min=c;
    }
    printf("最小値は%dです。",min);

    return 0;

}