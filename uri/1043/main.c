#include <stdio.h>
#include <stdlib.h>

double trapezium_area(double A, double B, double C){
    return (A+B)*C/2;
}

double triangle_perimeter( double A, double B, double C){
    return A+B+C;
}

int is_triangle(double A, double B, double C){
    if(A >= B && A >= C) return abs(B-C) < A && B+C > A;
    if(B >= A && B >= C) return abs(A-C) < A && A+C > B;
    if(C >= A && C >= B) return abs(B-A) < C && B+A > C;
}

int main(){
    double A, B, C;
    scanf("%lf %lf %lf", &A, &B, &C);

    if(is_triangle(A,B,C)){
        printf("Perimetro = %.1lf\n",triangle_perimeter(A,B,C));
    } else printf("Area = %.1lf\n",trapezium_area(A,B,C));

    return 0;
}