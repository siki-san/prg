
/*これはやらない方が良い*/
#include <stdio.h>
int main(void){
    int n1,n2,n3,min;

    puts("二つの整数を入力して下さい。");
    printf("整数1:");
    scanf("%d",&n1);
    printf("整数2:");
    scanf("%d",&n2);
    printf("整数3:");
    scanf("%d",&n3);

    min = n1>n2 ?n1:n2;
    
    printf("最少値は%dです。",min);

    return 0;

    
}