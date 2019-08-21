#ifndef ALGORITHMS_GETGRAPH_H
#define ALGORITHMS_GETGRAPH_H

#include <ctime>
#include <random>
#include <vector>
#include <utility>

using namespace std;

vector<pair<int, pair<int, int>> getGraphEdgesVector(int size) {
    random_device rd;
    default_random_engine e(rd());
    uniform_int_distribution<int> getItem(0, 20);

	vector < pair<int, pair<int, int>> edges(size);

    for (int i = 0; i < size; i++) {
		edges.push_back(pair<int, pair<int, int>());
    }

    return edges;
}

void printEdgesList(vector< pair<int, pair<int, int>> list) {
	cout << "Graph:" << endl;
	for (pair<int, pair<int, int>& edge : list) {
	}
}

#endif //ALGORITHMS_GETGRAPH_H
