//
// Created by husey on 3-9-2020.
//

#include <string>
#include <iostream>
#include "Day.h"

using namespace std;

int main() {
    Day *day = nullptr;
// your code here
    Week *week = new Week(10);
    day = new Day("Woensdag", week);
// end of your code
    cout << "It's the " << day->name_of_day()
         << " in week " << day->week()->week_number()
         << "!" << endl;
// your code here
    delete week;
    delete day;
// end of your code

    return 0;
}