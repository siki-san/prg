#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROCK 1     /*ROCKkを１と定義する*/
#define SCISSORS 2  /*SCISSORSを2と定義する*/
#define PAPER 3   /*PAPERを3と定義する*/

int main (void){
    int me;/*選ばれたグーかチョキかパーが入るところ*/
    int you;/*コンピュータの手(相手のて)*/

    srand(time(NULL));  /*乱数の種を初期化*/

    puts("じゃんけんタイム");
    puts("グーなら1,チョキなら2,パーなら3を押してください。");
    puts("それでは始めます。");
    printf("さいしょはグーじゃんけんポン:");
    scanf("%d",&me);   

    you = rand()%3+1;  /*rand()と剰余で１～３の乱数を生成*/

    if(me == ROCK){
        printf("あなたが出したのはグーです。");
        if(you == ROCK){
            printf("相手が出したのはグーです。");
            printf("あいこです。");
        }else if(you == SCISSORS){
            printf("相手が出したのはチョキです。");
            printf("あなたの勝ちです。");
        }else if(you ==PAPER){
            printf("相手が出したのはパーです。");
            printf("あなたの負けです。");
        }
    }else if(me == SCISSORS){
        printf("あなたが出したのはチョキです。");
        if(you == ROCK){
            printf("相手が出したのはグーです。");
            printf("あなたの負けです");
        }else if(you == SCISSORS){
            printf("相手が出したのはチョキです。");
            printf("あいこです。");
        }else if(you ==PAPER){
            printf("相手が出したのはパーです。");
            printf("あなたの勝ちです。");
        }
    }else if(me == PAPER){
        printf("あなたが出したのはパーです。");
        if(you == ROCK){
            printf("相手が出したのはグーです。");
            printf("あなたの勝ちです。");
        }else if(you == SCISSORS){
            printf("相手が出したのはチョキです。");
            printf("あなたの負けです。");
        }else if(you ==PAPER){
            printf("相手が出したのはパーです。");
            printf("あいこです。");
        }
    }else{
        printf("グー:1,チョキ:2,パー:3のどれかで出してください。\n");
    }


return 0;

}