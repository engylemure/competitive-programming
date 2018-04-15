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

int suicide_survivor(int *soldiers, int length, int k_jump){
    int survivor;

    return survivor;
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

void print_list(List* list){
    List* to_print = list;
    while(to_print != NULL){
        printf("%d ", to_print->value);
        to_print = to_print->next;
    }
}

void free_list(List *list){
    free(list);
}

void remove_from_list(List *list){
    if(list == NULL) return;
    if(list->next != NULL && list->previous != NULL){
        list->previous->next = list->next;
        list->next->previous = list->previous;
//        printf("previous %d -> list %d -> next %d\n", list->previous->value, list->value, list->next->value);
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
}

void purge_list(List *list){
    List* to_be_deleted = list;
    while(to_be_deleted->next != NULL){
        to_be_deleted = to_be_deleted->next;
        free_list(to_be_deleted->previous);
    }
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
    while(n_people > 1){
        people_to_die = next_person;
        if(peoples == people_to_die) peoples = people_to_die->next;
        if(people_to_die->next != NULL)
            next_person = people_to_die->next;
        else next_person = peoples;
//        printf("people_to_die %d\n", people_to_die->value);
        remove_from_list(people_to_die);
        next_person = advance(peoples, next_person, k_jump-1);
//        printf("next_person %d\n",next_person->value);
        printf("\n");
        n_people--;
    }

    return peoples->value;
}

int main(){
    int n, i, n_people, k_jump;
    scanf("%d", &n);
    for(i = 0; i < n; i ++){
        scanf("%d %d", &n_people, &k_jump);
        printf("Survivor: %d", flavious_joseph(n_people, k_jump));
    }
    return 0;
}