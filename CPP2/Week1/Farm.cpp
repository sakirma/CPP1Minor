//
// Created by husey on 17/11/2020.
//

#include <memory>
#include "Farm.h"

void Farm::add_llama(std::unique_ptr <Llama> p) {
    animals_.push_back(std::move(p));
}

void Farm::add_alpaca(std::unique_ptr<Alpaca> p) {
    animals_.push_back(std::move(p));
}

void Farm::inspect() const {
    for(const std::unique_ptr<Animal>& a : animals_)
    {
        a->make_noise();
    }
}

void Farm::reverse_inspect() const {
    for (auto it = animals_.rbegin(); it != animals_.rend(); ++it) {
        it->get()->make_noise();
    }
}
