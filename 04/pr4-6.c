#include <stdio.h>
int main(void){
    int no;

    printf("正の整数を入力して下さい。:");
    scanf("%d",&no);

    while( no>=0 ){
        if(no%2 == 0){
         printf("%d ",no);
        }
    no --;
    }
    
    printf("\n");
    return 0;

}