#include <stdio.h>


int main(void){
    double x , y;

    printf("二つの整数を入力してください。\n");
    printf("整数x:");
    scanf("%lf",&x);
    printf("整数y:");
    scanf("%lf",&y);


    printf("xはyの%0.0lf%%です。\n", (x / y) * 100);

    return 0;
}