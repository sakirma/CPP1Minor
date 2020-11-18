//
// Created by husey on 3-9-2020.
//

#ifndef CPP1_FAVOURITE_H
#define CPP1_FAVOURITE_H

struct Favourites
{
    char letter;
    int prime;
    char digit;
};

void show_favourites_by_value(Favourites f);
void show_favourites_by_reference(Favourites &f);
void show_favourites_by_pointer(Favourites *p);

#endif //CPP1_FAVOURITE_H
