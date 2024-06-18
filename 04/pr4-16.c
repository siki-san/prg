#include <stdio.h>
int main(void){
    int no;

    printf("整数値:");
    scanf("%d",&no);

    int i=1;
    while(i<no){
        if(i%2==1){
            printf("%d ",i);
        }
    i++;
    }
    printf("\n");
    return 0;
}