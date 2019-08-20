
#ifndef ALGORITHMS_SHAKERSORT_H
#define ALGORITHMS_SHAKERSORT_H

#include <algorithm>

void shakerSort (int *arr, int size) {
    bool swapped;

    for (int k = size - 1; k > 0; k--) {
        swapped = false;

        for (int i = k; i > (size - 1 - k); i--)
            if (arr[i] < arr[i - 1]) {
                std::swap(arr[i], arr[i - 1]);
                swapped = true;
            }

        for (int i = size - k; i < k; i++) {
            if (arr[i] > arr[i+1]) {
                std::swap(arr[i], arr[i + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }

}

#endif //ALGORITHMS_SHAKERSORT_H

