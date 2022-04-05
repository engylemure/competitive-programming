#include <stdio.h>
#define beto 'B'
#define alice 'A'
#define clara 'C'

char zero_one(int a, int b, int c){
    if(a == b && a == c) return '*';
    if(a != b && a != c) return alice;
    if(b != a && b != c) return beto;
    if(c != a && c != b) return clara;
}

int main(){
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) != EOF){
        printf("%c\n",zero_one(a, b, c));
    };
    return 0;
}