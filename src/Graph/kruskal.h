#ifndef ALGORITHMS_BREADTH_FIRST
#define ALGORITHMS_BREADTH_FIRST

#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<pair<int, pair<int, int>>> kruskal (vector<pair<int, pair<int, int>>> graph) {
    int n = graph.size();

    vector<pair<int, pair<int, int>>> res;
    vector<int> tree_id;

    sort(graph.begin(), graph.end());

    for (int i = 0; i < n; ++i) {
        tree_id.push_back(i);
    }

    for (int i = 0; i < n; ++i) {
        int a = graph[i].second.first,  b = graph[i].second.second,  l = graph[i].first;
        if (tree_id[a] != tree_id[b]) {
            res.push_back(make_pair(l, make_pair(a, b)));

            int old_id = tree_id[b],  new_id = tree_id[a];
            for (int j = 0; j < n; ++j) {
                if (tree_id[j] == old_id) {
                    tree_id[j] = new_id;
                }
            }
        }
    }

    return res;
}

#endif // !ALGORITHMS_BREADTH_FIRST
