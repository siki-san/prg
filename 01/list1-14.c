#include <stdio.h>
int main(void){
    int n1,n2;
    int wa;

    printf("２つの整数を入力してください。\n");
    printf("整数n1:");
    scanf("%d",&n1);
    printf("整数n2:");
    scanf("%d",&n2);
    
    wa=n1+n2;
    printf("それらの和は%dです。\n",wa);
    printf("すなわちn1+n2=%dです。\n",wa);

    return 0;

}