#include <stdio.h>

int restriction1(int b, int c){
    return b > c;
}

int restriction2(int a, int d){
    return d > a;
}

int restriction3(int cd, int ab){
    return cd > ab;
}

int restriction4(int c, int d){
    return c > 0 && d > 0;
}

int restriction5(int a){
    return a%2 == 0;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(restriction1(b, c) && restriction2(a, d) && restriction3(c+d,a+b) && restriction4(c, d) && restriction5(a)){
        printf("Valores aceitos\n");
    } else printf("Valores nao aceitos\n");
    return 0;
}