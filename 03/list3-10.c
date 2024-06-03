#include <stdio.h>
int main(void){

int m;
printf("整数を入力せよ。:");
scanf("%d",&m);

if (m>0) {
    if (m%2==0) {
        printf("その数は偶数です。\n");
    } else {
        printf("その数は奇数です。\n");
    }
} else {
    puts("正でない値が入力されました。");
}

return 0;
}
