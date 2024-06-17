#include <stdio.h>
int main(void){
    int no,i;

    printf("正の整数:");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        printf("*");
    }
    printf("\n");
    return 0;
}