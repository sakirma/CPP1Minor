//
// Created by husey on 3-9-2020.
//

#include <iostream>
//call by value
void cbv(int &param)
{
    param += 10;
}

int main()
{
    int a = 5;
    cbv(a);
    std::cout << "a: " << a << std::endl;

    return 0;
}