#include <stdio.h>
int main(void){

int a;

printf("整数を入力せよ。:");
scanf("%d",&a);

if (a){
    puts("その数はゼロではありません。");
}else{
    puts("その数はゼロです。");
}

return 0;

}