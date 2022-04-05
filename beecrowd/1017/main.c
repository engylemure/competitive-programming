#include <stdio.h>

int main(){
    int hours, velocity;

    scanf("%d %d", &hours, &velocity);
    printf("%.3f\n", hours*velocity/12.0);

    return 0;
}