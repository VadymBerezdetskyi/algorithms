#ifndef ALGORITHMS_ARRAY_H
#define ALGORITHMS_ARRAY_H

#include <ctime>
#include <random>

using namespace std;

int* getRandomArray(int size) {
    random_device rd;
    default_random_engine e(rd());
    uniform_int_distribution<int> getItem(0, 100);

    int* array = new int[size];

    for (int i = 0; i < size; i++) {
        array[i] = getItem(e);
    }

    return array;
}

int* getSortedArray(int size) {
    int i = 0;
    random_device rd;
    default_random_engine e(rd());
    uniform_int_distribution<int> getItem(10, 100);
    int sub = getItem(e);

    int* array = new int[size];

    for (i = 0; i < size; i++) {
        array[i] = i + sub;
    }

    return array;
}

void printArray(int* arr, int size) {
    cout << "[ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ", ";
    }
    cout << " ]" << endl;
}

int getMax (int* const arr, int size) {
    int mx = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > mx) {
            mx = arr[i];
        }
    }

    return mx;
}

#endif //ALGORITHMS_ARRAY_H
