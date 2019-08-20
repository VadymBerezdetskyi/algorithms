
#ifndef ALGORITHMS_SIMPLECHOICE_H
#define ALGORITHMS_SIMPLECHOICE_H

#include <algorithm>

void simpleChoice (int *array, int length) {
    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {
        int smallestIndex = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex) {
            if (array[currentIndex] < array[smallestIndex]) {
                smallestIndex = currentIndex;
            }
        }

        std::swap(array[startIndex], array[smallestIndex]);
    }
}

#endif //ALGORITHMS_SIMPLECHOICE_H
