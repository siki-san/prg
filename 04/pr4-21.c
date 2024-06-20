#include <stdio.h>
int main(void){
    int no;
    int i;
    int j;

    printf("正方形を作ります\n");
    printf("何段ですか:");
    scanf("%d",&no);

    for(i=1; i<=no; i++){
        for(j=1;j<=no;j++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;

    }