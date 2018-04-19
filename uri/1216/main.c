#include <stdio.h>
#include <string.h>

/*
 * URI Online Judge | 1216
 *  Getline One
 */

int main(){
    double total_distance = 0, distance_to_friend;
    int number_of_friends = 0;
    char friend_name[50];
    while(scanf("%[^\n]\n%lf\n", friend_name, &distance_to_friend) != EOF){
        number_of_friends++;
        total_distance+= distance_to_friend;
    }
    if(number_of_friends != 0)
        printf("%.1lf\n", total_distance/number_of_friends);
    return 0;
}
