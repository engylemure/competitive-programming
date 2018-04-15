#include <stdio.h>

void insertionSort(int original[], int length) {
    int i, j, atual;

    for (i = 1; i < length; i++) {
        atual = original[i];


        for (j = i - 1; (j >= 0) && (atual < original[j]); j--) {
            original[j + 1] = original[j];
        }

        original[j+1] = atual;
    }

}

void print_vector(int vector[], int length){
    int i;
    for(i = 0; i < length; i++){
        printf("%d\n", vector[i]);
    }
}
int main(){
    int original[3], sorted[3];
    scanf("%d %d %d", &original[0], & original[1], & original[2]);
    sorted[0] = original[0];
    sorted[1] = original[1];
    sorted[2] = original[2];
    insertionSort(sorted, 3);
    print_vector(sorted, 3);
    printf("\n");
    print_vector(original, 3);
    return 0;
}