#include <stdio.h>
int main(void){
    int no;
    int tmp=1;

    printf("nの値:");
    scanf("%d",&no);

    int sum = 0;
    while(tmp<=no){
        sum += tmp;
        tmp++;
    }

    printf("1から%dまでの総和は%dです。",no,sum);
    printf("\n");

    return 0;


}