#include <stdio.h>
#include <string.h>

int main(){
    char name[101];
    double salary, sale;
    scanf("%[^\n]",name);
    scanf("%lf %lf", &salary, &sale);
    printf("TOTAL = R$ %.2lf\n", salary+sale*0.15);
    return 0;
}