
#ifndef ALGORITHMS_BFS_H
#define ALGORITHMS_BFS_H

#include <vector>
#include <iostream>
#include <queue>
#include "functional"

using namespace std;

void walk (vector<vector<int>> graph, int index, function<void(int node)> callback, queue<int> &turn, vector<bool> &used) {
    while (!turn.empty()) {
        int u = turn.front();
        turn.pop();

        for (int i = 0; i < (int) graph[u].size(); i++) {
            if (!used[i]) {
                callback(i);
                used[i] = true;
                turn.push(i);
            }
        }
    }
}

void bfs (vector<vector<int>> graph, function<void(int node)> callback) {
    int n = graph.size();
    vector<bool> used(n);
    queue<int> turn;

    const int initial = 0;
    turn.push(initial);
    used[initial] = true;

    callback(initial);

    walk(graph, initial, callback, turn, used);
}

#endif //ALGORITHMS_BFS_H
