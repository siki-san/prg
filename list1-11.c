/*読み込んだ整数値をそのまっま表示する*/
#include <stdio.h>
int main(void){
int no;

printf("整数を入力してください：");
scanf("%d",&no);

printf("あなたは%dと入力しましたね\n",no);

return 0;

}