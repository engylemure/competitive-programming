#include <stdio.h>

int main(){
    int L, R;

    while(scanf("%d %d", &L, &R) && !(L == 0 && R == 0)){
        printf("%d\n", L + R);
    }
    return 0;
}