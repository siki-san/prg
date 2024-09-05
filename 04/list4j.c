/*読み込んだ整数値に応じてじゃんけんの手を表示する(0,1,2のみを受け付ける)*/

#include <stdio.h>
int main(void){
    int hand;

    do{
        printf("手を選んでください。\nぐーは0、チョキは1、パーは2 :\n");
        scanf("%d",&hand);
    }while(hand <0 || hand>2);

    printf("あなたは");
    switch (hand){
        case 0 :printf("グー"); break;
        case 1 :printf("チョキ"); break;
        case 2 :printf("パー"); break;
    }
    printf("を選びました\n");
    
    return 0;
}
