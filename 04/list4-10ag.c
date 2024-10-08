#include <stdio.h>
int main(void) {
    int no;
    do {
        printf("整数を入力してください：");
        scanf("%d", &no);
        if (no <= 0) {
            printf("正でない数を入力しないでください");
        }
    } while (no <= 0);

    printf("その数を逆から読むと");
    while(no > 0){
        printf("%d",no%10);
        no /= 10;  /*noを10で割った値が入る*/
    }
    puts("です。");

    return 0;

}
