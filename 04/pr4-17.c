#include <stdio.h>
int main(void){
    int no;

    printf("nの値:");
    scanf("%d",&no);
    
    int i=1;
    while(i<=no){
        printf("%dの2乗は%d\n",i,i*i);
        i++;
    }
    printf("\n");
    return 0;

}
