#include <stdio.h>

int main(){
    double number1, number2;
    scanf("%lf %lf", &number1, &number2);
    printf("MEDIA = %.5lf\n", (number1*3.5+number2*7.5)/11);
    return 0;
}