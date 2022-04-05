#include <stdio.h>

int is_origin(double x, double y){
    return x == 0 && y == 0;
}

int is_q1(double x, double y){
    return x > 0 && y > 0;
}

int is_q2(double x, double y){
    return x < 0 && y > 0;
}

int is_q3(double x, double y){
    return x < 0 && y < 0;
}

int is_q4(double x, double y){
    return x > 0 && y < 0;
}

int axis_y(double x, double y){
    return x == 0 && y != 0;
}

int axis_x(double x, double y){
    return x != 0 && y == 0;
}

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);

    if(is_origin(x, y))printf("Origem\n");
    else if(is_q1(x,y))printf("Q1\n");
    else if(is_q2(x,y))printf("Q2\n");
    else if(is_q3(x,y))printf("Q3\n");
    else if(is_q4(x,y))printf("Q4\n");
    else if(axis_x(x,y))printf("Eixo X\n");
    else if(axis_y(x,y))printf("Eixo Y\n");

    return 0;
}