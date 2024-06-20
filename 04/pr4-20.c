#include <stdio.h>
int main(void){
    int i,j;/*iは1*1,1*2の1の方で、掛けるほうがj*/

    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            printf("%3d ",i*j);

        }
        putchar('\n');
    }
    return 0;
}