#include <stdio.h>

int mdc(int number1, int number2){
    int rest = number1%number2;

    while(rest != 0){
        number1 = number2;
        number2 = rest;
        rest = number1%number2;
    }

    return number2;
}

int main(){
    int n, i;
    int n1, n2;
    scanf("%d", &n);
    for(i = 0; i < n; i ++){
        scanf("%d %d", &n1, &n2);
        printf("%d\n", mdc(n1, n2));
    }
    return 0;
}