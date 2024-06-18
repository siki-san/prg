#include <stdio.h>
int main(void){
    int i;
    int j;

    for(i =1; i <= 9; i++){ /*iが１のときにjが１,1*1,1*2,1*3みたいな。で終わったら、次iが2の時も同様にしてiが9でjが9まで*/
        for(j=1; j<=9; j++){
            printf("%3d",i*j);
        }
        putchar('\n');
    }
    return 0;
}