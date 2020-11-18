//
// Created by husey on 18/11/2020.
//

#include <iostream>
#include "Observable.h"

int main() {
    observable obs{10};
    obs.add_observer([](int val) { std::cout << "Got: " << val << "\n"; });
    obs.value(11);
    obs.add_observer([](int val) { std::cout << "It changed to: " << val << "\n"; });
    obs.value(12);
}

void observable::value(int value) {
    value_ = value;
    std::for_each(observer_.begin(), observer_.end(),
                  [value](auto &o) { o(value); });
}

template<typename Observer>
void observable::add_observer(Observer o) {
    observer_.emplace_back(o);
}
