/*読み込んだ月の季節を表示する*/
#include <stdio.h>
int main(void){
    int month;

    printf("何月ですか:");
    scanf("%d",&month);

    if(month >= 3 && month <=5){
        printf("%d月は春です。\n",month);
    }else if(month >= 6 && month <=8){
        printf("%d月は夏です。\n",month);
    }else if(month >= 9 && month <= 11){
        printf("%d月は秋です。\n",month);
    }else if(month == 1 || month == 2 || month ==3){
        printf("%dは冬です。",month);
    }else{
        printf("%d月はありません。\n",month);
    }
    return 0;
}


