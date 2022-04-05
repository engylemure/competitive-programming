#include <stdio.h>

int main(){
    int value;
    scanf("%d", &value);
    int n100 = value/100;
    int n50 = (value%100)/50;
    int n20 = ((value%100)%50)/20;
    int n10 = (((value%100)%50)%20)/10;
    int n5 = ((((value%100)%50)%20)%10)/5;
    int n2 = (((((value%100)%50)%20)%10)%5)/2;
    int n1 = ((((((value%100)%50)%20)%10)%5)%2);
    printf("%d\n", value);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    return 0;
}