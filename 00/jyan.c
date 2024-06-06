#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (void){
    int z;/*選ばれたグーかチョキかパーが入るところ*/
    int y;/*コンピュータの手(相手のて)*/

    srand(time(NULL));  /*乱数の種を初期化*/

    puts("じゃんけんタイム");
    puts("グーなら1,チョキなら2,パーなら3を押してください。");
    puts("それでは始めます。");
    printf("さいしょはグーじゃんけんポン:");
    scanf("%d",&z);   

    if(z == 1){
        printf("あなたが出したのはグーです。");
        y = rand()%3+1;
        if(y == 1){
            printf("相手が出したのはグーです。");
            printf("あいこです。");
        }else if(y == 2){
            printf("相手が出したのはチョキです。");
            printf("あなたの勝ちです。");
        }else if(y ==3){
            printf("相手が出したのはパーです。");
            printf("あなたの負けです。");
        }
    }else if(z == 2){
        printf("あなたが出したのはチョキです。");
        y = rand()%3+1;
        if(y == 1){
            printf("相手が出したのはグーです。");
            printf("あなたの負けです");
        }else if(y == 2){
            printf("相手が出したのはチョキです。");
            printf("あいこです。");
        }else if(y ==3){
            printf("相手が出したのはパーです。");
            printf("あなたの勝ちです。");
        }
    }else if(z == 3){
        printf("あなたが出したのはパーです。");
        y = rand()%3+1;
        if(y == 1){
            printf("相手が出したのはグーです。");
            printf("あなたの勝ちです。");
        }else if(y == 2){
            printf("相手が出したのはチョキです。");
            printf("あなたの負けです。");
        }else if(y ==3){
            printf("相手が出したのはパーです。");
            printf("あいこです。");
        }
    }else{
        printf("グー:1,チョキ:2,パー:3のどれかで出してください。\n");
    }


return 0;

}