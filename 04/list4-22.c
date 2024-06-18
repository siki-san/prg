#include <stdio.h>
int main(void){
    int retry;
    int i;
    int no;

    do{
        do{
            printf("正の整数を入力せよ。:");
            scanf("%d",&no);
            if(no<=0){
                puts("正でない数を入力しないでください。");
            }
        }while(no<=0);

        for(i=1;i<=no;i++){
            putchar('*');
        }
        putchar('\n');

        printf("もう一度？[yes...0/No...9]:");
        scanf("%d",&retry);
    }while(retry == 0);

    return 0;
}