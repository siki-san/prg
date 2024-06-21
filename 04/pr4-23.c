#include <stdio.h>
int main(void){
    int no;
    int i,j;

    puts("に等辺三角形を作ります。");
    printf("何段ですか:");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        putchar('\n');
    }
    return 0;

}