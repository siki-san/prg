#include <stdio.h>
int main (void){
    int gu,ty,pa,z;

    puts("じゃんけんタイム");
    puts("グーなら0,チョキなら1,パーなら2を押してください。");
    puts("それでは始めます。");
    printf("さいしょはグーじゃんけんポン:");
    scanf("%d",&z);

    if(z == 0){
        printf("あなたが出したのはグーです。");
    }else if(z == 1){
        printf("あなたが出したのはチョキです。");
    }else if(z == 2){
        printf("あなたが出したのはパーです。");
    }else{
        printf("グー:0,チョキ:1,パー:2のどれかで出してください。\n");
    }

return 0;

}