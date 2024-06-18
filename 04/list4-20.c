#include <stdio.h>
int main(void){
    int len;
    int i,j;

    puts("左下直角に等辺三角形を表示します");
    printf("短辺:");
    scanf("%d",&len);

    for(i=1;i<=len;i++){
        for(j=1;j<=i;j++){
            putchar('*');
        }
        putchar('\n');
    }

    return 0;

}