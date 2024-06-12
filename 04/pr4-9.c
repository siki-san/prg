#include <stdio.h>
int main(void){
    int no;

    printf("正の整数を入力して下さい:");
    scanf("%d",&no);

    int i=0;

    while(no > i){
        if(no%2 == 0){
            printf("+");
        }else{
            printf("-");
        }
    no--;
    }
    
    return 0;

}