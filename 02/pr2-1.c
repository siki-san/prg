#include <stdio.h>


int main(void){
    double x , y;

    printf("“ñ‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B\n");
    printf("®”x:");
    scanf("%lf",&x);
    printf("®”y:");
    scanf("%lf",&y);


    printf("x‚Íy‚Ì%0.0lf%%‚Å‚·B\n", (x / y) * 100);

    return 0;
}