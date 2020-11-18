//
// Created by husey on 4-9-2020.
//

#include <iostream>
void my_name(char* result)
{
    char myname[6] = { 'J', 'e', 'r', 'o', 'e', 'n' };
    size_t len = sizeof(myname)/sizeof(char);
    for (size_t i = 0; i < len; ++i) {
        result[i] = myname[i];
    }
}

int main(int argc, char **argv)
{
    char your_name[6];
    my_name(your_name);

    for(int i = 0; i < 6; ++i)
        std::cout << your_name[i];
    std::cout << std::endl;
}
