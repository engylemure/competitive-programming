#include <stdio.h>
#include <string.h>

void decode_cesar_cypher(char* text, int shift_value){
    int len = strlen(text);
    char letter;
    int i;
    for(i = 0; i < len; i++){
        letter = text[i]-shift_value;
        if(letter < 65) letter+= 26;
        text[i] = letter;
    }
}

int main(){
    int n, i;
    char text[51];
    int shift_value;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%s",text);
        scanf("%d\n", &shift_value);
        decode_cesar_cypher(text, shift_value);
        printf("%s\n",text);
    }
    return 0;
}
