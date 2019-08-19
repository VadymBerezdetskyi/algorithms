
#ifndef ALGORITHMS_LINEARSTRING_H
#define ALGORITHMS_LINEARSTRING_H

#include "../utils/string.h"
#include <iostream>

void linearString(const std::string base, const std::string image) {
    int N = base.length();
    int M = image.length();
    int j, i = -1;

    do {
        i++;
        j = 0;

        while (j < M && base[i + j] == image[j]) {
            j++;
        }
    } while (j != M && i != N - M);

    if (j == M) {
        std::cout << "Found on position " << i - j + 1 << std::endl;
    } else {
        std::cout << "Not found" << std::endl;
    }
}

#endif //ALGORITHMS_LINEARSTRING_H
