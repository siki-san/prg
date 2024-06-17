#include<stdio.h>
int main(void){
    int no;
    int i=1;

    printf("正の整数を入力せよ。:");
    scanf("%d",&no);
    
    while(i <= no){
        printf("%d",i%10); /*iを10で割った剰余を使うことで、0から９までの値を繰り返し表示する*/
        i++;
    }
    printf("\n");
    return 0;
    
}