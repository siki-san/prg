#include <stdio.h>
int main(void){
int x=57;   /*初期化*/
int y=x+12;

printf("xの値は%dです。\n",x);
printf("yの値は%dです。\n",y);

return 0;
}



/*上とは値を入れるタイミングが異なる
#include <stdio.h>
int main(void){
int x,y;

x=57;　　　代入
y=x+12;

printf("xの値は%dです。\n",x);
printf("yの値は%dです。\n",y);

return 0;
}

*/