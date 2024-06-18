#include <stdio.h>
int main(void){
    int no,i;

    printf("何個＊を表示しますか:");
    scanf("%d",&no);
    
    i=1;
    while(i<=no){
        if(i%5 == 0){
            printf("*\n");
        }else{
            putchar('*');
        }
    i++;
    }
    printf("\n");
    return 0;
}
