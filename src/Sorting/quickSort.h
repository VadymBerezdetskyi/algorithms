
#ifndef ALGORITHMS_QUICKSORT_H
#define ALGORITHMS_QUICKSORT_H

#include <algorithm>

void quickSort (int *arr, int first, int last) {
    int i = first, j = last, x = arr[(first + last) / 2];
    do {
        while (arr[i] < x) i++;
        while (arr[j] > x) j--;

        if (i <= j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }

            i++;
            j--;
        }
    } while (i <= j);

    if (i < last) {
        quickSort(arr, i, last);
    }

    if (first < j) {
        quickSort(arr, first, j);
    }
}

#endif //ALGORITHMS_QUICKSORT_H
