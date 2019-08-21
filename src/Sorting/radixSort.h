
#ifndef ALGORITHMS_RADIXSORT_H
#define ALGORITHMS_RADIXSORT_H

#include "../utils/array.h"

void count (int *arr, const int n, int exp) {
    int *output = new int[n];
    int i, count[10] = {0};

    for (i = 0; i < n; i++) {
        count[ (arr[i]/exp)%10 ]++;
    }

    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    for (i = n - 1; i >= 0; i--) {
        output[count[ (arr[i]/exp) % 10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort (int *array, int size) {
    int m = getMax(array, size);

    for (int exp = 1; m / exp > 0; exp *= 10) {
        count(array, size, exp);
    }
}

#endif //ALGORITHMS_RADIXSORT_H
