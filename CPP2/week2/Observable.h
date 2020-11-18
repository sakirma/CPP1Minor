//
// Created by husey on 18/11/2020.
//

#pragma once


#include <functional>
#include <vector>

class observable {
public:
    explicit observable(int value) : value_{value} {};

    void value(int value);

    template<typename Observer>
    void add_observer(Observer o);

private:
    std::vector<std::function<void(int val)>> observer_;
    int value_;
};