#include <stdio.h>
int main(void){
    int no,i;

    printf("整数は何個:");
    scanf("%d",&no);

    int sum = 0;
    for(i=1;i<=no;i++){
        int tmp;
        printf("NO.%d:",i);
        scanf("%d",&tmp);
        sum += tmp;
    }
    printf("合計値:%d\n",sum);
    printf("平均値:%d\n",(double)sum/no);

    return 0;
 
}