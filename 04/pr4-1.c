#include <stdio.h>
int main(void){
    int retry;


    do {
        int no;
            
            printf("整数を入力して下さい。:");
            scanf("%d",&no);

            if(no == 0){
                puts("その数は0です。");
            }else if(no >0){
                puts("その数は正です。");
            }else {
                puts("その数は負です。");
            }

            printf("続けますか...1,続けない...9:");
            scanf("%d",&retry);

        }while(retry == 1);
    
    return 0;

}