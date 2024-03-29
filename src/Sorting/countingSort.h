
#ifndef ALGORITHMS_COUNTINGSORT_H
#define ALGORITHMS_COUNTINGSORT_H

void countingSort (int *a, int n) {
    int max = a[n - 1], min = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }

    int *c = new int[max + 1 - min];
    for (int i = 0; i < max + 1 - min; i++) {
        c[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        c[a[i] - min] = c[a[i] - min] + 1;
    }

    int i = 0;
    for (int j = min; j < max + 1; j++) {
        while (c[j-min] != 0) {
            a[i] = j;
            c[j-min]--;
            i++;
        }
    }
}

#endif //ALGORITHMS_COUNTINGSORT_H
