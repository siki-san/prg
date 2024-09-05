/*読み込んだ整数値は奇数であるか偶数であるか(好きなだけ繰り返せる)*/
#include <stdio.h>
int main(void){
    int retry; /*処理を続けるかどうか*/
    int n;

    do{

        printf("整数を入力してください。");
        scanf("%d",&n);

        if(n % 2){
            printf("入力された整数は奇数です。\n");
        }else{
            printf("入力された整数は偶数です。\n");
        }

        printf("もう一度入力しますか？Yes...0 /No...9 :");
        scanf("%d",&retry);
    }while (retry == 0);

    return 0;

}
