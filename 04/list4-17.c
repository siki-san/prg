#include <stdio.h>
int main(void){
    int n,i;

    printf("整数値:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n % i ==0){
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}
