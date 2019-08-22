#include <iostream>
#include "vector"
#include "string"

#include "src/utils/array.h"
#include "src/utils/string.h"
#include "src/utils/getGraph.h"

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
#include "./src/Sorting/countingSort.h"
#include "./src/Sorting/radixSort.h"
#include "./src/Sorting/heapSort.h"
#include "./src/Sorting/mergeSort.h"

#include "./src/Graph/kruskal.h"
#include "./src/Graph/prim.h"
#include "./src/Graph/dfs.h"
#include "./src/Graph/bfs.h"

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
        COUNTING_SORT,
        RADIX_SORT,
        HEAP_SORT,
        MERGE_SORT,
        KRUSKAL,
        PRIM,
        DFS,
        BFS,
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
        "11. Counting sort;",
        "12. Radix sort;",
        "13. Heap sort;",
        "14. Merge sort;",
        "15. Kruskal's algorithm;",
        "16. Prim's algorithm;",
        "17. Depth-first search;",
        "18. Breadth-first search;",
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
            break;
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

        case COUNTING_SORT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            countingSort(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case RADIX_SORT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            radixSort(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case HEAP_SORT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            heapSort(arr, SIZE);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case MERGE_SORT: {
            int* arr = getRandomArray(SIZE);
            cout << "Before sort: "; printArray(arr, SIZE);
            mergeSort(arr, SIZE, 0, SIZE - 1);
            cout << "After sort: "; printArray(arr, SIZE);
            break;
        }

        case KRUSKAL: {
            vector<pair<int, pair<int, int>>> graph = getGraphEdgesVector(SIZE);
            cout << "Before: " << endl; printEdgesList(&graph);
            vector<pair<int, pair<int, int>>> result = kruskal(graph);
            cout << "After: " << endl; printEdgesList(&result);
            break;
        }

        case PRIM: {
            vector<vector<int>> graph = getMatrix(SIZE);
            cout << "Before: " << endl; printMatrix(&graph);
            vector<pair<int, pair<int, int>>> result = prim(graph);
            cout << "After: " << endl; printEdgesList(&result);
            break;
        }

        case DFS: {
            vector<vector<int>> graph = getMatrix(SIZE);
            cout << "Graph: " << endl; printMatrix(&graph);
            cout << "Current node: ";
            dfs(graph, [](int node) -> void {
                cout << node << "\t";
            });
            break;
        }

        case BFS: {
            vector<vector<int>> graph = getMatrix(SIZE);
            cout << "Graph: " << endl; printMatrix(&graph);
            cout << "Current node: ";
            bfs(graph, [](int node) -> void {
                cout << node << "\t";
            });
            break;
        }

        default: {
            cout << "Invalid choice." << endl;
            break;
        }
    }

    return 0;
}