#include <stdio.h>

int main(){
    int time_in_seconds;
    int hours, seconds, minutes;
    scanf("%d", &time_in_seconds);
    hours = time_in_seconds/3600;
    minutes = (time_in_seconds-hours*3600)/60;
    seconds = (time_in_seconds%60);
    printf("%d:%d:%d\n", hours, minutes, seconds);
    return 0;
}