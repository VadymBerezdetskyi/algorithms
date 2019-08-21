#ifndef ALGORITHMS_GETGRAPH_H
#define ALGORITHMS_GETGRAPH_H

#include <iostream>
#include <ctime>
#include <random>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int, pair<int, int>>> getGraphEdgesVector(int size) {
    random_device rd;
    default_random_engine e(rd());
    uniform_int_distribution<int> getItem(0, 20);

	vector<pair<int, pair<int, int>>> edges;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int weight = getItem(e);

            if (weight > 0) {
                edges.push_back(make_pair(weight, make_pair(i, j)));
            }
        }
    }

    return edges;
}

void printEdgesList(vector< pair<int, pair<int, int>>> *list) {
	for (pair<int, pair<int, int>> edge : *list) {
        cout << edge.second.first << " < -- > " << edge.second.second << " = " << edge.first << endl;
	}
}

#endif //ALGORITHMS_GETGRAPH_H
