#include <stdio.h>
int main (void){
    int no;
    int i,j;

    puts("ピラミッドを作ります。");
    printf("何段ですか:");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        for(j=no-i;j>=0;j--){
            printf(" ");
        }    
        for(j=1;j<=(i-1)*2+1;j++){    
        printf("*");
        }
        printf("\n");
    }
return 0;
}
