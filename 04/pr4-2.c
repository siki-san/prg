#include <stdio.h>
int main(void){
    int a,b,sum,max,min,z;
    sum = 0;

    puts("二つの整数を入力して下さい。");
    printf("整数a:");
    scanf("%d",&a);
    printf("整数b:");
    scanf("%d",&b);


    if(a>b){
        max=a;
        min=b;
    }else{
        max=b;
        min=a;
    }
    do{
    sum += min;
    min += 1;
    }while(max>=min);


    printf("%d以上%d以下の全整数の和は%dです。",max,min,sum);
    
    return 0;

}