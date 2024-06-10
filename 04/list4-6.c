#include <stdio.h>
int main(void){
    int no;
    printf("整数を入力して下さい。");
    scanf("%d",&no);

    while(no >= 0){
        printf("%d ",no--);
    }
    printf("\n");

    return 0;


}