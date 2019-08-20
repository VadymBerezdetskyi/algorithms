#ifndef ALGORITHMS_GETGRAPH_H
#define ALGORITHMS_GETGRAPH_H

#include <ctime>
#include <random>

using namespace std;

int** getGraph (int size) {
    random_device rd;
    default_random_engine e(rd());
    uniform_int_distribution<int> getItem(0, 1);

    int** array = new int *[size];

    for (int i = 0; i < size; i++) {
        array[i] = new int[size];
    }

    for (int i = 0; i < size; i++) {
        array[i][i] = 0;

        for (int j = i + 1; j < size; j++) {
            array[i][j] = array[j][i] = getItem(e);
        }
    }

    return array;
}

#endif //ALGORITHMS_GETGRAPH_H
