#include <stdio.h>
int main(void){
    int height;
    int width;
    int i,j;

    puts("長方形を表示します。");
    printf("高さ:");
    scanf("%d",&height);
    printf("横幅:");
    scanf("%d",&width);

    for(i = 1; i <= height; i++){
        for(j=1; j<=width; j++){
            putchar('*');
        }
    printf("\n");
    }
    return 0;
}