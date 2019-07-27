#include <iostream>
#include "vector"
#include "string"
#include "src/utils/array.h"

#include "./src/Search/linear.h"

int main() {
    int SIZE = 10;
    int choice = 100;

    enum argorithm { LINEAR };

    vector<string> menu = {
        "Choose the algorithm:",
        "0. linear search;",
    };

    for (string &item : menu) {
        cout << item << endl;
    }
    cin >> choice;


    switch (choice) {
        case LINEAR:
            int find;
            int* arr = getRandomArray(SIZE);
            cout << "Array: "; printArray(arr, SIZE);
            cout << "Enter number to find: ";
            cin >> find;
            linearSearch(arr, SIZE, find);
            break;
    }

    return 0;
}