//
// Created by husey on 2-9-2020.
//

#include <iostream>
using namespace std;

class Aap
{
private:
    int rugnummer;
    double gewicht;
    char* naam;

public:
    void klim()
    {}
};

class Test
{
private:
    static int teller;
    char* lijst;
//    int a,b,c,d,e,f,h,i,j,k,l;

public:
    Test()
    {
        lijst = new char[10000000];

        cout << teller++ << endl;

        Test* test = new Test();
    }
};

int Test::teller = 0;

int main()
{
    Test* t = new Test();
    return 0;
}