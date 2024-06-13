#include <stdio.h>
int main(void){
    int no;

    printf("正の整数:");
    scanf("%d",&no);

    if(no>=0){

    int i=1;
    while(i<=no){
        printf("*\n");
        i++;
    }
    

    }

    return 0;

}