#include <stdio.h>
int main(void){
    int no;

    do{
        printf("正の整数を入力して下さい:");
        scanf("%d",&no);
        if(no <= 0){
            puts("正でない数を入力しないでください");
        }
    }while(no <= 0);  /*noが0より小さい間実行する*/

    
    printf("その数を逆から読むと");
    while(no > 0){
        printf("%d",no % 10); /*noを10で割った剰余を使うことで逆から答えを導ける*/
        no /= 10;  /*0になるまで10で割る*/
    }
    puts("です。");

    return 0;

}
