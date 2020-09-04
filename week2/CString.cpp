//
// Created by husey on 4-9-2020.
//

#include <iostream>
using namespace std;

char my_favourite_animal[] = "Llama"; // an array of 6 elements!
char harrys_favourite_animal[] = { 'L', 'l', 'a', 'm', 'a', 0 };

int string_length(char *str) {
    char *begin = str;
    while(*str) { // don't change this line!
        // your code here
        str++;
    }
    return str - begin;
}

void not_safe() {
    char lowercase[17];
    char uppercase[17];
    lowercase[16] = uppercase[16] = 0;
    for(int i = 0; i < 16; ++i)
        lowercase[i] = 'a' + i;

    for(int i = 0; i < 16; ++i)
        uppercase[i] = 'A' + i;

    cout << string_length(lowercase) << endl;
    cout << string_length(uppercase) << endl;
}


int main() {
    cout << "Favourite_animal is " << string_length(my_favourite_animal) << endl;
    cout << "harry's favourite animal is " << string_length(harrys_favourite_animal) << endl;

    not_safe();
}

