#include <stdio.h>
int main(void){
    int no;
    printf("正の整数を入力してください:");
    scanf("%d",&no);


    if(no>0){
    int a=1;
    while(a <= no){
        printf("%d ",a++);
    }
    printf("\n");
    }

    return 0;

}