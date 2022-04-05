#include <stdio.h>
#include <iostream>
#include <list>

using namespace std;
void print_list(list<int> l){
    list<int>::iterator it = l.begin();
    for(int i = 0; i < l.size(); i++, it++){
        cout << *it << " " ;
    }
    cout << endl;
}

int main(){

    int n_people, k_jumps, n_cases;
    scanf("%d", &n_cases);
    for(int case_i = 1; case_i <= n_cases && scanf("%d %d", &n_people, &k_jumps); case_i++){
        list<int> people;
        list<int>::iterator person, next_person;
        for(int i = 1; i <= n_people; i++)people.push_back(i);
        next_person = people.begin();

        while(people.size() != 1){
            cout << "Number of survivors " << people.size() << endl;
            print_list(people);
            person = next_person;
            cout << "People "<< *person << "\n";
            advance(person, k_jumps-1);
            cout << "People "<< *person << "\n";
            next_person = next(person);
            cout << "People to be removed "<< *person << "\n";
            cout << "People after the dead " << *next_person << endl;
            people.remove(*person);
        }
        cout << "Case " <<  case_i++ << ": " << *next_person << "\n";
    }
}
