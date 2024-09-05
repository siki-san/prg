/*整数値を次々と読み込んで合計と平均を表示*/
#include <stdio.h>
int main(void){
    int sum = 0;  /*合計*/
    int cun = 0; /*整数値の個数*/
    int retry; /*処理を続けるか*/
    int t;

    do{

        printf("整数を入力してください。");
        scanf("%d",&t);

        sum = sum + t; /*sumにtを加えた数字をsumに代入する*/
        cun = cun +1;  /*cunに1を加えた数字をcunに代入する*/

        printf("まだ続けるか yseは0,noは9:");
        scanf("%d",&retry);

    }while(retry == 0);


    printf("合計は%dで平均は%.2fです。\n",sum,(double)sum/cun);


    return 0;
}