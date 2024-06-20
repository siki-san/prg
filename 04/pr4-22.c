#include <stdio.h>
int main(void){
    int height;
    int width;
    int i,j;

    puts("横長の長方形を作ります。");
    printf("一辺(その1):");
    scanf("%d",&height);
    printf("一辺(その2):");
    scanf("%d",&width);

    for(i=1;i<=width;i++){
        for(j=1;j<=height;j++){
            printf("*");
        }
    putchar('\n');
    }
return 0;

}