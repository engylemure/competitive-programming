#include <stdio.h>
/*
 * URI Online Judge | 1397
 *  Jogo do Maior
 */
char who_won(int A, int B){
    if(A > B) return 'A';
    if(B > A) return 'B';
    else return '*';
}
int main(){
    int A, B;
    int pointsA, pointsB;
    int n_match, i;
    char winner;
    while(scanf("%d", &n_match) && n_match != 0){
        pointsA = 0;
        pointsB = 0;
        for(i = 0; i < n_match && scanf("%d %d", &A, &B); i++){
            winner = who_won(A, B);
            if(winner == 'A')pointsA++;
            else if(winner == 'B')pointsB++;
        }
        printf("%d %d\n", pointsA, pointsB);
    }
    return 0;
}