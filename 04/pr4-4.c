#include <stdio.h>
int main(void){
    int no;
    printf("正の整数を入力してくダサい:");
    scanf("%d",&no);

    while(no >=1){
        printf("%d ",no--);
    }

    return 0;

}