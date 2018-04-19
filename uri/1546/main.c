#include <stdio.h>
#include <string.h>

/*
 * URI Online Judge | 1546
 *  Feedback
 */

#define Elogios "Rolien"
#define Bugs "Naej"
#define Duvidas "Elehcim"
#define Sugestoes "Odranoel"

char* fedibequi(int code){
    if(code == 1)return Elogios;
    else if(code == 2)return Bugs;
    else if(code == 3)return Duvidas;
    else if(code == 4)return Sugestoes;
}

int main(){
    int N, K;
    int i, j, code;
    scanf("%d", &N);
    for(i = 0; i < N && scanf("%d", &K); i++){
        for(j = 0; j < K && scanf("%d", &code); j++){
            printf("%s\n", feedbequi(code));
        }
    }
}