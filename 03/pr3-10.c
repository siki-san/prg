#include <stdio.h>
int main(void){
    int a,b,c;

    puts("三つの整数を入力して下さい。");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);
    printf("整数C:");
    scanf("%d",&c);

    if(a == b && b == c){
        printf("三つの値は等しいです。");
    }else if(a == b || b == c || c == a){
        printf("二つの値は等しいです。");
    }else{
        printf("三つの値は異なります。");
    }

    return 0;
}