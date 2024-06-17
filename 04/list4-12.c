#include <stdio.h>
int main(void){
    int no,i;
    printf("正の整数を入力せよ。");
    scanf("%d",&no);

    for(i=0; i<=no; i++){ /*変数iを0から始めてnoに入っている値と等しくなるまで1ずつ増やしながらループ本体を実行*//*開始値；終了値;増分*/
        printf("%d ",i);
    }

    printf("\n");
    return 0;

}