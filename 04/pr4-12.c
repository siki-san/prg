#include <stdio.h>

int main (void){
    int no;
    
    do{
    printf("正の整数を入力して下さい：");
    scanf("%d",&no);

    if(no <= 0){
        puts("正でない数を入力しないでください");
    }
    }while(no <= 0);

    int counnt=0;
    int tmp =no;

    printf("%dは",no);
    while(tmp > 0){
        tmp%10;
        tmp /= 10;
        counnt ++;
    }
    printf("%d桁です。",counnt);

return 0;

}