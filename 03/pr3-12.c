#include <stdio.h>
int main(void){
    int a;

    printf("整数を入力して下さい。:");
    scanf("%d",&a);

    switch(a%2){
        case 0 : 
        puts("その数は偶数です。"); 
        break;
        case 1 : 
        puts("その数は奇数です。"); 
        break;
    }

    return 0;

}