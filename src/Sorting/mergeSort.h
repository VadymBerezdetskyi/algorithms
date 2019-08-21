
#ifndef ALGORITHMS_MERGESORT_H
#define ALGORITHMS_MERGESORT_H

#include <algorithm>

void mergeSort (int *arr, const int size, int l, int r) {
    if (r == l) {
        return;
    }

    if (r - l == 1) {
        if (arr[r] < arr[l]) {
            std::swap(arr[r], arr[l]);
        }

        return;
    }

    int m = (r + l) / 2;
    mergeSort(arr, size, l, m);
    mergeSort(arr, size, m + 1, r);

    int *buf = new int[size];
    int xl = l;
    int xr = m + 1;
    int cur = 0;

    while (r - l + 1 != cur) {
        if (xl > m) {
            buf[cur++] = arr[xr++];
        } else if (xr > r) {
            buf[cur++] = arr[xl++];
        } else if (arr[xl] > arr[xr]) {
            buf[cur++] = arr[xr++];
        } else buf[cur++] = arr[xl++];
    }

    for (int i = 0; i < cur; i++) {
        arr[i + l] = buf[i];
    }
}

#endif //ALGORITHMS_MERGESORT_H
