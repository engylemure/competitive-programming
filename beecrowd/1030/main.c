#include <stdio.h>
#include <stdlib.h>

typedef struct list List;

struct list{
    int value;
    List *previous, *next;
};

List* newList(int value){
    List* new_list = malloc(sizeof(List));
    new_list->value = value;
    new_list->previous = NULL;
    new_list->next = NULL;
    return(new_list);
}

List* insertAfter(List* list, List* afterList){
    list->next = afterList;
    afterList->previous = list;
    return list;
}

List* create_list(int value){
    int i;
    List *first_element = newList(1);
    List *next_element = NULL;

    next_element = first_element;
    for(i = 2; i <= value; i++){
        insertAfter(next_element, newList(i));
        next_element = next_element->next;
    }
    return first_element;
}

void free_list(List *list){
    free(list);
}

void remove_from_list(List *list){
    if(list == NULL) return;
    if(list->next != NULL && list->previous != NULL){
        list->previous->next = list->next;
        list->next->previous = list->previous;
        free_list(list);
    }
    else if(list->next == NULL && list->previous != NULL){
        list->previous->next = NULL;
        free_list(list);
    }
    else if(list->next != NULL && list->previous == NULL){
        list->next->previous = NULL;
        free_list(list);
    }
    else free_list(list);
}

List* advance(List *first, List* it, int moves){
    List* aux = it;
    while(moves > 0){
        if(aux->next == NULL)aux = first;
        else aux = aux->next;
        moves--;
    }
    return aux;
}

int flavious_joseph(int n_people, int k_jump){
    List* peoples = create_list(n_people);
    List* people_to_die = NULL, *next_person = advance(peoples, peoples, k_jump-1);
    while(n_people > 1) {
        people_to_die = next_person;
        if (peoples == people_to_die) peoples = people_to_die->next;
        if (people_to_die->next != NULL)
            next_person = people_to_die->next;
        else next_person = peoples;
        remove_from_list(people_to_die);
        next_person = advance(peoples, next_person, k_jump - 1);
        n_people--;
    }
    int survivor = peoples->value;
    remove_from_list(peoples);
    return survivor;
}

int main(){
    int n, i, n_people, k_jump;
    scanf("%d", &n);
    for(i = 1; i <= n; i ++){
        scanf("%d %d", &n_people, &k_jump);
        printf("Case %d: %d\n", i, flavious_joseph(n_people, k_jump));
    }
    return 0;
}