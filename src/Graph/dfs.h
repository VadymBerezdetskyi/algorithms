
#ifndef ALGORITHMS_DFS_H
#define ALGORITHMS_DFS_H

#include <vector>
#include <iostream>
#include "functional"

using namespace std;

void walk (vector<vector<int>> graph, int index, function<void(int node)> callback, vector<bool> &used) {
    used[index] = true;

    for (int new_index = 0; new_index < graph.size(); ++new_index) {
        if (!used[new_index] && graph[index][new_index] > 0) {
            callback(new_index);
            walk(graph, new_index, callback, used);
        }
    }
}

void dfs (vector<vector<int>> graph, function<void(int node)> callback) {
    vector<bool> used(graph.size());
    const int initial = 0;
    callback(initial);
    walk(graph, initial, callback, used);
}

#endif //ALGORITHMS_DFS_H
