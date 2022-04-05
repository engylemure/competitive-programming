#include <stdio.h>

int main(){
    int i, times_played;
    int mary_score = 0, jhon_score = 0, match;

    while(scanf("%d", &times_played)){
        if(times_played == 0)break;
        jhon_score = 0;
        for(i = 0; i< times_played && scanf("%d",&match); i ++) jhon_score+=match;
        mary_score = times_played-jhon_score;
        printf("Mary won %d times and John won %d times\n", mary_score, jhon_score);
    }
    return 0;
}