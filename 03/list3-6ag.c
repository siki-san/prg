/*読み込んだ2つの整数値は等しいかどうか*/
#include <stdio.h>
int main(void){
    int n1;
    int n2;

    printf("２つ整数を入力してください\n");
    printf("1つめ:");
    scanf("%d",&n1);
    printf("2つめ:");
    scanf("%d",&n2);

    if(n1 == n2){
        printf("2つの整数は等しいです。");
    }else{
        printf("二つの整数は等しくありません。");
    }

    return 0;
}