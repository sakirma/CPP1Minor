#pragma once

#include <vector>
#include "Animals.h"

using namespace std;

class Farm {
public:
    void add_llama(unique_ptr<Llama> p);

    void add_alpaca(unique_ptr<Alpaca> p);

    void inspect() const;

    void reverse_inspect() const;

    template <class T, typename... Args>
    void add_animal(Args &&... args) {
        animals_.push_back(std::make_unique<T>(std::forward<Args>(args)...));
    }

private:
    std::vector<unique_ptr<Animal>> animals_{};
};




