//
// Created by husey on 4-9-2020.
//

#include "iostream"
using namespace std;

int string_length(char *str) {
    char *begin = str;
    while(*str) { // don't change this line!
        // your code here
        str++;
    }
    return str - begin;
}

void copy_char_array(const char *from, char *to) {
    if (from != nullptr)
    {
        strcpy_s(to, strlen(from) + 1, from);
    }
}

int main(int argc, char **argv) {
    char *llama;
    const char *from = "shitsdfasdfa";
    int len = strlen(from);
    llama = new char[len + 1];

    copy_char_array(from, llama);

    cout << llama << endl;
    return 0;
}
