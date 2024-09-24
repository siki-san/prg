/*整数値を読み込んで合計と平均値を表示*/
#include <stdio.h>
int main(void){
int sum = 0; /*整数値の合計*/
int cnt = 0; /*整数値の個数*/ 
int n = 0; /*入力された値が入る*/
int retry; /*続けるか続けないかの判別する数字が入る*/

do{
printf("please insert number");
scanf("%d",&n);

sum = sum + n;/*合計に入力された値を加算していく*/
cnt += 1;/*何回目か平均の時使うのでカウントする*/

printf("まだ？<Yes...0,NO...9>:");
scanf("%d",&retry);
}while (retry == 0);/*もし、入力された値が0に等しかったらdo whileを繰り返す、そうじゃなかったらここをでる*/

printf("合計は%dで平均は%.2fです。\n",sum,(double)sum/cnt); 
/*平均は合計/個数でをれをdouble型にする*//*キャストを使っている(型)式でかっこの中に指定された型としての値*/

return 0;

}

