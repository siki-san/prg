#include <stdio.h>
int main(void){
    int sum = 0;  /*合計*/
    int cnt = 0; /*整数値の個数*/
    int retry;  /*処理を続けるか*/

    do{
        int t;

        printf("整数値を入力して下さい。");
        scanf("%d",&t);

        sum = sum + t; //sumにtを加えた値をsumに代入する
        cnt = cnt + 1;  //cntに1を加えた値をcntに代入する

        printf("まだ？【yes...0/no...9】:");
        scanf("%d",&retry);
        
      }while(retry == 0);

      printf("合計は%dで平均は%.2fです。\n",sum,(double)sum / cnt);

      return 0;

}