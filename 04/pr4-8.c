#include <stdio.h>
int main(void){
    int no,a;

    printf("正の整数:");
    scanf("%d",&no);

    a = no;
    while(a-- >0){
        putchar('*');
        if(no>1){
            putchar('\n');
        }

    }
    return 0;

}