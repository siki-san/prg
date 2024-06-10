#include <stdio.h>
#include <math.h>

int main(void){
    int no; /*入力された値*/

    printf("正の整数を入力して下さい。:");
    scanf("%d",&no);

    int i=2; /*２のべき乗の最初の値は２から*/
    while(i <= no){    /*入力された値よりiが小さい間繰り返す*/
        printf("%d ",i);   /*iの値をひょうじする*/
        i = i*2;  /*2のべき乗だからiに2かけたものをiに入れる*/
    }
    printf("\n");


    return 0;
}