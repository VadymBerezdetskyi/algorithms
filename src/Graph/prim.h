
#ifndef ALGORITHMS_PRIM_H
#define ALGORITHMS_PRIM_H

#include <vector>
#include <iostream>
#include <utility>

using namespace std;

vector<pair<int, pair<int, int>>> prim (vector<vector<int>> graph) {
    int n = graph.size();
    const int INF = 1000000000;

    vector<pair<int, pair<int, int>>> res;
    vector<bool> used (n);
    vector<int> min_e (n, INF), sel_e (n, -1);
    min_e[0] = 0;

    for (int i = 0; i < n; ++i) {
        int v = -1;
        for (int j = 0; j < n; ++j) {
            if (!used[j] && (v == -1 || min_e[j] < min_e[v])) {
                v = j;
            }
        }

        if (min_e[v] == INF) {
            cout << "No MST!";
            exit(0);
        }

        used[v] = true;
        if (sel_e[v] != -1 && graph[v][sel_e[v]] > 0) {
            res.push_back(make_pair(graph[v][sel_e[v]], make_pair(v, sel_e[v])));
        }

        for (int to = 0; to < n; ++to) {
            if (graph[v][to] < min_e[to]) {
                min_e[to] = graph[v][to];
                sel_e[to] = v;
            }
        }
    }

    return res;
}

#endif //ALGORITHMS_PRIM_H
