#include <stdio.h>
int main (void){
    int month;

    printf("何月ですか。:");
    scanf("%d",&month);

    switch(month){
        case 3 : 
        case 4 :
        case 5 :
            printf("%d月は春です。",month); 
            break;
        case 6 :
        case 7 :
        case 8 :
            printf("%d月は夏です。",month); 
            break;
        case 9 :
        case 10 :
        case 11 :
            printf("%d月は秋です。",month); 
            break;
        case 12 : 
        case 1 :
        case 2 :
            printf("%d月は冬です。",month); 
            break;
    }
    return 0;

}