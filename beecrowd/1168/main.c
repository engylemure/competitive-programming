#include <stdio.h>
#include <string.h>

int led_per_digit(int digit){
    switch(digit){
        case 0: return 6;
        case 1: return 2;
        case 2: return 5;
        case 3: return 5;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 3;
        case 8: return 7;
        case 9: return 6;
    }
}

int led_per_number(char* number){
    int len = strlen(number);
    int i;
    int total_led = 0;

    for(i = 0; i < len; i ++){
        total_led += led_per_digit((int)number[i] - 48);
    }
    return total_led;
}

int main() {
    int n;
    int i;
    char number[101];

    scanf("%d", &n);
    for(i = 0; i < n; i ++){
        scanf("%s",number);
        printf("%d leds\n", led_per_number(number));
    }

    return 0;
}