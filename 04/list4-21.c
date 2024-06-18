#include <stdio.h>
int main(void){
    int len;
    int i,j;

    puts("右下直角に等辺三角形を表示します。");
    printf("短辺:");
    scanf("%d",&len);

    for(i=1;i<=len;i++){
        for(j=1;j<=len-i;j++){ /*短辺からiを引いた分空白出す*/
            putchar(' ');
        }
        for(j=1; j<=i;j++){/*iの数だけ＊を出すそしたら右下が直角の直角二等辺三角形になる*/
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}