//
// Created by husey on 3-9-2020.
//

#include <iostream>
#include "Day.h"

int main() {
    Day *day = nullptr;
// your code here
    Week week {10};
    Day day_on_stack { "Tuesday", &week };
    day = &day_on_stack;
// end of your code
    cout << "It's the " << day->name_of_day()
         << " in week " << day->week()->week_number()
         << "!" << endl;
// your code here
// Geen deletes nodig. De objecten staan op de stack
// en objecten op de stack worden automatisch vrij-
// gegeven aan het eind van de functie waarin ze
// gedeclareerd zijn.
// end of your code
}