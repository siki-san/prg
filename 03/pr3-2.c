#include <stdio.h>
int main(void){
int n;

printf("整数を入力せよ。：");
scanf("%d",&n);

if(n==0){
    puts("その数はゼロです。");
}else if(n>0){
    puts("その数は正です。");
}else if(n<0){
    puts("その数は負です。");
}

return 0;

}