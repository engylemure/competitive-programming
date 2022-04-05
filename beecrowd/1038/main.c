#include <stdio.h>

double value_per_code(int code){
    if(code == 1) return 4.00;
    if(code == 2) return 4.50;
    if(code == 3) return 5;
    if(code == 4) return 2;
    if(code == 5) return 1.5;
    return 0;
}
int main(){
    int code, number;
    scanf("%d %d", &code, &number);
    printf("Total: R$ %.2lf\n",number*value_per_code(code));
    return 0;
}