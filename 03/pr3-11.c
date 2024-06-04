#include <stdio.h>
int main(void){
    int a,b;
    
    puts("二つの整数を入力して下さい。");
    printf("整数A:");
    scanf("%d",&a);
    printf("整数B:");
    scanf("%d",&b);

    if(a>b && a-b <= 10 || b>a && b-a <= 10){
        printf("それらの差は10以下です。");
    }else{
        printf("それらの差は11以上です。");
    }

    return 0;

}