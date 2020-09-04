//
// Created by husey on 3-9-2020.
//



#ifndef CPP1_DAY_H
#define CPP1_DAY_H

#include "Week.h"
#include <string>

using namespace std;

class Day {
private:
    string _name;
    Week *_week;
public:
    Day(string name, Week *week) : _name{name}, _week{week} {};

    string &name_of_day() { return _name; }

    Week *week() { return _week; }
};
#endif //CPP1_DAY_H
