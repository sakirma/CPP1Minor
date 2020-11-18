#include <array>
#include <iostream>
#include <vector>

class Enemy {
public:
    Enemy(const char *name, int hp) : name_{name}, hp_{hp} {}
    int hp() const { return hp_; }
    const char *name() const { return name_; }

private:
    const char *name_;
    int hp_;
};

template <typename It>
void print_big(It begin, It end) {
    while (begin != end) {
        if (begin->hp() >= 30)
            std::cout << begin->name() << '\n';
        ++begin;
    }
}

int main() {
    std::vector<Enemy> enemies{};
    enemies.emplace_back("Bandit", 10);
    enemies.emplace_back("Rover", 20);
    enemies.emplace_back("Dragon", 50);
    enemies.emplace_back("Cow", 20);
    enemies.emplace_back("Potato", 30);
    std::array<Enemy, 5> foes{Enemy{"Bandit", 10}, Enemy{"Rover", 20},
                              Enemy{"Dragon", 50}, Enemy{"Cow", 20},
                              Enemy{"Potato", 30}};
    print_big(enemies.begin(), enemies.end());
    print_big(foes.cbegin(), foes.cend());
}
