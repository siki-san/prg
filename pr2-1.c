#include <stdio.h>


int main(void){
    double x , y;

    printf("��̐�������͂��Ă��������B\n");
    printf("����x:");
    scanf("%lf",&x);
    printf("����y:");
    scanf("%lf",&y);


    printf("x��y��%0.0lf%%�ł��B\n", (x / y) * 100);

    return 0;
}