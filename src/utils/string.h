#ifndef ALGORITHMS_STRING_H
#define ALGORITHMS_STRING_H

#include <algorithm>
#include "string"

using namespace std;

string getRandomString(size_t length) {
    auto randchar = []() -> char
    {
        const char charset[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[rand() % max_index];
    };

    string str(length,0);
    generate_n(str.begin(), length, randchar);

    return str;
}

#endif //ALGORITHMS_STRING_H
