#include <stdio.h>

int main(void){
    int num;
    int i, sum = 0;

    printf("整数は何個:");
    scanf("%d",&num);

    while(i < num){
        int tmp;
        printf("No.%d:",i++);
        scanf("%d",&tmp);
        sum += tmp;
    }

    printf("合計値:%d\n",sum);
    printf("平均値:%.2f",(double)sum/num);

    return 0;
}


