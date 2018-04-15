#include <stdio.h>
#include <string.h>

int main(){
    int n, x;
    int i;
    int numbers[2000];
    memset(numbers, 0, 2000*sizeof(int));
    scanf("%d", &n);
    for(i = 0; i < n && scanf("%d", &x); i++)
        numbers[x-1]+=1;
    for(i = 0; i < 2000; i++)
        if(numbers[i] != 0)printf("%d aparece %d vez(es)\n", i+1, numbers[i]);

    return 0;
}