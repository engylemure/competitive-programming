#include <stdio.h>

int main(){
    int km;
    double l;
    scanf("%d %lf", &km, &l);
    printf("%.3lf km/l\n", km/l);
    return 0;
}