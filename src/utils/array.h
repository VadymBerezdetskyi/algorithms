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
        array[i] = getItem(rd);
    }

    return array;
}

int* getSortedArray(int size) {
    int* array = new int[size];

    for (int i = 0; i < size; i++) {
        array[i] = i;
    }

    return array;
}

void printArray (int* arr, int size) {
    cout << "[ ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ", ";
    }
    cout << " ]" << endl;
}

#endif //ALGORITHMS_ARRAY_H