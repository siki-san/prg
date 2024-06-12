#include <stdio.h>
int main(void){
    int num;  /*整数の個数が入る*/

    printf("整数は何個:");
    scanf("%d",&num);

    int i = 0;  
    int sum = 0; /*合計が入る*/

    while(i < num){  /*入力してくれた整数の個数より小さい間繰り返す*/
        int tmp;
        printf("No.%d:",++i);  /*++iだからiに1足した値が入る*/
        scanf("%d",&tmp);
        sum += tmp;
    }

    printf("合計値:%d\n",sum);
    printf("平均値:%.2f\n",(double)sum / sum);


    return 0;

}