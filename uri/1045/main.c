#include <stdio.h>

void bubble_sort(double *vector, int length){
    int i, j;
    double aux;
    for(i = 0; i < length-1; i++)
        for(j = 0; j < length-1; j++){
            if(vector[j] < vector[j+1]){
                aux = vector[j];
                vector[j] = vector[j+1];
                vector[j+1] = aux;
            }
    }
}

int is_triangle(double *triangle_sides){
    return !(triangle_sides[0] >= triangle_sides[1]+triangle_sides[2]);
}

int is_triangle_rectangle(double *triangle_sides){
    return triangle_sides[0]*triangle_sides[0] == triangle_sides[1]*triangle_sides[1]+triangle_sides[2]*triangle_sides[2];
}

int is_triangle_obtusangle(double *triangle_sides){
    return triangle_sides[0]*triangle_sides[0] > triangle_sides[1]*triangle_sides[1]+triangle_sides[2]*triangle_sides[2];
}

int is_triangle_acutangle(double *triangle_sides){
    return triangle_sides[0]*triangle_sides[0] < triangle_sides[1]*triangle_sides[1]+triangle_sides[2]*triangle_sides[2];
}

int is_triangle_equilateral(double *triangle_sides){
    return triangle_sides[1] == triangle_sides[0] && triangle_sides[1] == triangle_sides[2];
}

int is_triangle_isosceles(double *triangle_sides){
    return triangle_sides[1] == triangle_sides[0] && triangle_sides[2] != triangle_sides[1] ||
           triangle_sides[2] == triangle_sides[1] && triangle_sides[0] != triangle_sides[1];
}

int main(){
    double triangle_sides[3];
    scanf("%lf %lf %lf", &triangle_sides[0], &triangle_sides[1], &triangle_sides[2]);
    bubble_sort(triangle_sides, 3);
    if(is_triangle(triangle_sides)){
        if(is_triangle_rectangle(triangle_sides))printf("TRIANGULO RETANGULO\n");
        if(is_triangle_obtusangle(triangle_sides))printf("TRIANGULO OBTUSANGULO\n");
        if(is_triangle_acutangle(triangle_sides))printf("TRIANGULO ACUTANGULO\n");
        if(is_triangle_equilateral(triangle_sides))printf("TRIANGULO EQUILATERO\n");
        if(is_triangle_isosceles(triangle_sides))printf("TRIANGULO ISOSCELES\n");
    } else {
        printf("NAO FORMA TRIANGULO\n");
    }
}