//
// Created by husey on 3-9-2020.
//

#include <iostream>
#include "Favourite.h"



int main()
{
    Favourites my_favourites;
    my_favourites.letter = 'J';
    my_favourites.prime = 11;
    my_favourites.digit = '9';

    show_favourites_by_value(my_favourites);
    std::cout  << std::endl;
    show_favourites_by_reference(my_favourites);
    std::cout << std::endl;
    show_favourites_by_pointer(&my_favourites);
}

void set_prime(Favourites &f, int number)
{
    f.prime = number;
}

void show_favourites_by_value(Favourites f) {
    std::cout << "(value)Hey, my favourite letter is " << f.letter << std::endl;
    std::cout << "(value)Hey, my favourite prime is " << f.prime << std::endl;
    std::cout << "(value)Hey, my favourite digit is " << f.digit << std::endl;
}

void show_favourites_by_reference(Favourites &f) {
    std::cout << "(reference)Hey, my favourite letter is " << f.letter << std::endl;
    std::cout << "(reference)Hey, my favourite prime is " << f.prime << std::endl;
    std::cout << "(reference)Hey, my favourite digit is " << f.digit << std::endl;
}

void show_favourites_by_pointer(Favourites *p) {
    if(p != nullptr)
    {
        std::cout << "(pointer)Hey, my favourite letter is " << p->letter << std::endl;
        std::cout << "(pointer)Hey, my favourite prime is " << p->prime << std::endl;
        std::cout << "(pointer)Hey, my favourite digit is " << p->digit << std::endl;
    }
}