#include <iostream>
#include "vector"
#include "string"
#include "src/utils/array.h"

#include "./src/Search/linear.h"
#include "./src/Search/binary.h"

int main() {
    int SIZE = 10;
    int choice = 100;

    enum argorithm { LINEAR, BINARY };

    vector<string> menu = {
        "Choose the algorithm:",
        "0. Linear search;",
        "1. Binary search;",
    };

    for (string &item : menu) {
        cout << item << endl;
    }
    cin >> choice;


    switch (choice) {
        case LINEAR: {
            int find;
            int* arr = getRandomArray(SIZE);
            cout << "Array: "; printArray(arr, SIZE);
            cout << "Enter number to find: ";
            cin >> find;
            linearSearch(arr, SIZE, find);
        }


        case BINARY: {
            int find;
            int* arr = getSortedArray(SIZE);
            cout << "Array: "; printArray(arr, SIZE);
            cout << "Enter number to find: ";
            cin >> find;
            binarySearch(arr, SIZE, find);
            break;
        }


        default: {
            cout << "Invalid choice." << endl;
            break;
        }
    }

    return 0;
}