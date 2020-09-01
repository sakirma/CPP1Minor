//
// Created by husey on 28-8-2020.
//

#include "file2.h"


void say_odd(int n) {
    cout << n << " is odd." << endl;

    if (n > 0) {
        say_even(n - 1);
    }
}

void say_even(int n) {
    cout << n << " is even." << endl;
    if (n > 0) {
        say_odd(n - 1);
    }
}

void say(int n) {
    if (n < 0) {
        return;
    }

    if ((n % 2) == 0) {
        say_even(n);
    } else {
        say_odd(n);
    }
}

int main() {
    say(3);

    return 0;
}
