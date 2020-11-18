#pragma once

#include <iostream>

class Animal {
public:
    Animal() = default;
    virtual ~Animal() = default;
    Animal(const Animal &) = delete;
    Animal(Animal &&) = delete;
    Animal &operator=(const Animal &) = delete;
    Animal &operator=(Animal &&) = delete;
    virtual void make_noise() const = 0;
};

class Llama : public Animal {
public:
    explicit Llama(int milk_production) : milk_production_{milk_production} {}
    void make_noise() const override {
        std::cout << "MWEEEUH, I make " << milk_production_ << " liters a day\n";
    }

private:
    int milk_production_;
};

class Alpaca : public Animal {
public:
    explicit Alpaca(bool needs_shave) : needs_shave_{needs_shave} {}
    void make_noise() const override {
        std::cout << "HUEEEWM ";
        if (needs_shave_) {
            std::cout << "I need a shave!";
        } else {
            std::cout << "I'm cold!";
        }
        std::cout << "\n";
    }

private:
    bool needs_shave_{};
};


