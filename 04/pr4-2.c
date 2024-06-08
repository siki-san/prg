#include <stdio.h>
int main(void){
    int a; /*整数aの値*/
    int b; /*整数bの値*/
    int sum; /*全整数の和を入れる*/
    int max; /*大きい方の数字を入れる*/
    int min; /*小さい方の数字を入れる*/
    sum = 0; /*初期化*/
    max = 0; /*初期化*/
    min = 0; /*初期化*/

    puts("二つの整数を入力して下さい。");
    printf("整数a:");
    scanf("%d",&a);
    printf("整数b:");
    scanf("%d",&b);


    if(a>b){ /*もし入力してもらった2つの整数のうちaが大きかったら*/
        max=a; /*max(大きい方)にaを入れる*/
        min=b; /*min(小さい方)にbを入れる*/
    }else{   /*もし入力してもらった2つの整数のうちbが大きかったら*/
        max=b; /*max(大きい方)にbを入れる*/
        min=a; /*min(小さい方)にaを入れる*/
    }
    
    int tmp = min;   /*min(小さい方)をtmpに入れる。小さい方の値をいれているminの値を変えたら小さい方の値が変わっていってしまうからminとは別でtmp用意する*/
    do{  /*実行する*/
    sum += tmp;  /*tmpの値に1プラスした物をsumに入れる。つまり小さい方の値から大きい方の値になるまで1ずつ増えて足していっている*/
    tmp ++;  /*tmpを1プラスする。*/
    }while(max>=tmp);  /*tmpがmax(大きい方)の値になるまで繰り返す*/


    printf("%d以上%d以下の全整数の和は%dです。",min,max,sum); 
    
    return 0;

}