#include <stdio.h>
int greater(int *A, int *B){
    int aux;
    if(*B > *A){
        aux = *B;
        *B = *A;
        *A = aux;
    }
    return *A;
}
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    greater(&A, &B);

    if(A%B == 0)printf("Sao Multiplos\n");

    else printf("Nao sao Multiplos\n");

    return 0;
}