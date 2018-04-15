#include <stdio.h>

int main(){
    int number, hours;
    double salary, salary_per_hour;
    scanf("%d %d %lf", &number, &hours, &salary_per_hour);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", hours*salary_per_hour);
    return 0;
}