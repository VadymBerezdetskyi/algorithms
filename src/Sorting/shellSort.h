
#ifndef ALGORITHMS_SHELLSORT_H
#define ALGORITHMS_SHELLSORT_H

void shellSort (int *arr, int n) {
    int i, j, step;
    int tmp;

    for (step = n / 2; step > 0; step /= 2) {
        for (i = step; i < n; i++) {
            tmp = arr[i];

            for (j = i; j >= step; j -= step) {
                if (tmp < arr[j - step]) {
                    arr[j] = arr[j - step];
                } else {
                    break;
                }
            }

            arr[j] = tmp;
        }
    }
}

#endif //ALGORITHMS_SHELLSORT_H
