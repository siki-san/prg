#include <stdio.h>
int main (void){
    int n;
    printf("整数を入力して下さい。:");
    scanf("%d",&n);

    if(n){
        printf("True");
    }else{
        printf("false");
    }

    return 0;

}