#ifndef ALGORITHMS_BINARY_H
#define ALGORITHMS_BINARY_H

void binarySearch(int const *arr, int size, int find) {
    int L = 0, z = 0, i = 0;
    int R = size;
    bool found = false;

    while (L < R) {
        i = (L + R) / 2;
        if (find > arr[i]) L = i;
        if (find < arr[i]) R = i;
        if (find == arr[i]) {
            found = true;
            cout << "Element " << find << " found on position " << i << endl;
            break;
        }
    }

    if (!found) {
        cout << "Element " << find << " not found." << endl;
    }
}

#endif //ALGORITHMS_BINARY_H
