#ifndef ALGORITHMS_STRING_H
#define ALGORITHMS_STRING_H

#include <algorithm>
#include "string"

std::string getRandomString(size_t length) {
    auto randchar = []() -> char
    {
        const char charset[] =
                "0123456789"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "abcdefghijklmnopqrstuvwxyz";
        const size_t max_index = (sizeof(charset) - 1);
        return charset[rand() % max_index];
    };

    std::string str(length,0);
    std::generate_n(str.begin(), length, randchar);

    return str;
}

#endif //ALGORITHMS_STRING_H
