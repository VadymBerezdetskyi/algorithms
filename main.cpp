#include <iostream>
#include "vector"
#include "string"

#include "src/utils/array.h"
#include "src/utils/string.h"

#include "./src/Search/linear.h"
#include "./src/Search/binary.h"
#include "./src/Search/linearString.h"
#include "./src/Search/searchKMP.h"
#include "./src/Search/searchBM.h"

#include "./src/Sorting/linearInsert.h"
#include "./src/Sorting/shellSort.h"
#include "./src/Sorting/simpleChoice.h"
#include "./src/Sorting/bubbleSort.h"
#include "./src/Sorting/shakerSort.h"
#include "./src/Sorting/quickSort.h"

int main() {
    int SIZE = 10;
    int choice = 100;

    enum argorithm {
        LINEAR,
        BINARY,
        LINEAR_STRING,
        SEARCH_KMP,
        SEARCH_BM,
        LINEAR_INSERT,
        SHELL_SORT,
        SIMPLE_CHOICE,
        BUBBLE,
        SHAKER_SORT,
        QUICK_SORT,
    };

    vector<string> menu = {
        "Choose the algorithm:",
        "0. Linear search;",
        "1. Binary search;",
        "2. Linear search in string;",
        "3. Knuth–Morris–Pratt search algorithm;",
        "4. Boyer–Moore string-search algorithm;",
        "5. Insert sort;",
        "6. Shell sort;",
        "7. Simple choice sort;",
        "8. Bubble sort sort;",
        "9. Shaker sort;",
        "10. Quick sort;",
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

        case SEARCH_BM: {
            string image;
            string base = getRandomString(20);
            cout << "Base string: " << base << endl;
            cout << "Enter substring to find: ";
            cin >> image;
            searchBM(base, image);
            break;
        }

        case LINEAR_INSERT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            linearInsert(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case SHELL_SORT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            shellSort(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case SIMPLE_CHOICE: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            simpleChoice(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case BUBBLE: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            bubbleSort(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case SHAKER_SORT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            shakerSort(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case QUICK_SORT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            quickSort(arr, 0, SIZE - 1);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        default: {
            cout << "Invalid choice." << endl;
            break;
        }
    }

    return 0;
}