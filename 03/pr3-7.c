#include <stdio.h>
int main(void){
    int a,b,c,d,max;

    printf("四つの整数を入力して下さい。\n");
    printf("整数1:");
    scanf("%d",&a);
    printf("整数2:");
    scanf("%d",&b);
    printf("整数3:");
    scanf("%d",&c);
    printf("整数4:");
    scanf("%d",&d);

    max=a;
    if(max<a){
        max=a;
    }if(max<b){
        max=b;
    }if(max<c){
        max=c;
    }if(max<d){
        max=d;
    }
    
    printf("最大値は%dです。",max);

    return 0;

}