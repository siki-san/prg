#include<stdio.h>
int main(void){

    int no;
    printf("正の整数を入力せよ：");
    scanf("%d",&no);

    for(int i=0; i <= no; i++){ /*変数iを宣言0回からカウント,i<=noの間繰り返す,i++する*/
        printf("%d",i);
        putchar('\n');

    }

    return 0;
} 

