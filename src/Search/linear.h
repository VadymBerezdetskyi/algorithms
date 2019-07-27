#ifndef ALGORITHMS_LINEAR_H
#define ALGORITHMS_LINEAR_H

void linearSearch (int *arr, int size, int find) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == find) {
            found = true;
            cout << "Element " << find << " found on position " << i << endl;
        }
    }

    if (!found) {
        cout << "Element " << find << " not found" << endl;
    }
}

#endif //ALGORITHMS_LINEAR_H
