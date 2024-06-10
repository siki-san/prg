#include <stdio.h>
int main(void){
    int no; /*noという入力してもらった正の整数が入る箱*/

    printf("正の整数を入力して下さい:");
    scanf("%d",&no);

    int i=0;  /*iを0に初期化,変数iがいるのはカウントダウンと違ってアップはどこまでかわからないから入力とは別で準備？*/
    while(i<=no){ /*iがnoより小さい間繰り返す、つまりiがnoに追いついたら終わり*/
        printf("%d ",i++); /*表示した後、iの値を1つ大きくする(カウントアップ)*/
    }
    printf("\n");

    return 0;

}