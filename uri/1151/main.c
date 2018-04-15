#include <stdio.h>
int fibonacci(int n, int* series){
    int i;
    series[0] = 0;
    if(n > 1) series[1] = 1;
    if(n > 2) series[2] = 1;
    for(i = 3; i < n; i++){
        series[i] = series[i-1]+series[i-2];
    }
}

int main(){
    int n, i;
    scanf("%d", &n);
    int series[n];
    fibonacci(n, series);
    printf("0");
    for(i = 1; i < n; i++){
        printf(" %d", series[i]);
    }
    printf("\n");
    return 0;
}