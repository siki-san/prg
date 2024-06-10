#include <stdio.h>

int main(void){
    int no;

    printf("正の整数を入力して下さい:");
    scanf("%d",&no);

    while(no >= 0){  /*noが0以上の間繰り返す*/
        printf("%d ",no);
        no --;  /*noの値を減少していく(デクリメント)*/
    }
    printf("\n");

    return 0;

}