#include <stdio.h>

int is_between(double number, double a, double b){
    return (number >= a && number <= b);
}
int is_between_open_left(double number, double a, double b){
    return (number > a && number <= b);
}
int main(){
    double number;
    scanf("%lf", &number);
    if(is_between(number, 0, 25)){
        printf("Intervalo [0,25]\n");
    }
    else if(is_between_open_left(number, 25, 50)){
        printf("Intervalo (25,50]\n");
    }
    else if(is_between_open_left(number, 50, 75)){
        printf("Intervalo (50, 75]\n");
    }
    else if(is_between_open_left(number, 75, 100)){
        printf("Intervalo (75,100]\n");
    }
    else printf("Fora de intervalo\n");
    return 0;
}