#include <stdio.h>
int main(void){
    int no;
    int i=1;
    int count=0;

    printf("整数値:");
    scanf("%d",&no);

    while(i<=no){
        if(no % i ==0){
            printf("%d\n",i);
            count++;

        }
    i++;
    }
    printf("約数は%d個です。\n",count);
    printf("\n");
    return 0;
}