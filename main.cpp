#include <iostream>
#include "vector"
#include "string"
#include "src/utils/array.h"
#include "src/utils/string.h"

#include "./src/Search/linear.h"
#include "./src/Search/binary.h"
#include "./src/Search/linearString.h"
#include "./src/Search/searchKMP.h"

int main() {
    int SIZE = 10;
    int choice = 100;

    enum argorithm {
        LINEAR,
        BINARY,
        LINEAR_STRING,
        SEARCH_KMP,
    };

    vector<string> menu = {
        "Choose the algorithm:",
        "0. Linear search;",
        "1. Binary search;",
        "2. Linear search in string;",
        "3. Knuth–Morris–Pratt search algorithm;",
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

        case LINEAR_STRING: {
            string image;
            string base = getRandomString(20);
            cout << "Base string: " << base << endl;
            cout << "Enter substring to find: ";
            cin >> image;
            linearString(base, image);
            break;
        }

        case SEARCH_KMP: {
            string image;
            string base = getRandomString(20);
            cout << "Base string: " << base << endl;
            cout << "Enter substring to find: ";
            cin >> image;
            searchKMP(base, image);
            break;
        }

        default: {
            cout << "Invalid choice." << endl;
            break;
        }
    }

    return 0;
}