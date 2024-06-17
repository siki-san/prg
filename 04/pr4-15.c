#include <stdio.h>
int main(void){
    int start;
    int finish;
    int space;
    int i;

    printf("何㎝から:");
    scanf("%d",&start);
    printf("何㎝まで:");
    scanf("%d",&finish);
    printf("何㎝ごと:");
    scanf("%d",&space);
    
    for(i=start;i<=finish;i+=space){
        printf("%dcm %.2lfkg\n",i,(double)(i-100)*0.9);   
    }
    printf("\n");
    return 0;
}