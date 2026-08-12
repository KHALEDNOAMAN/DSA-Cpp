// Graph Coloring - Greedy Algorithm
// Time: O(V^2) | Space: O(V)
#include <vector>
using namespace std;

void graphColoring(vector<vector<int>>& adj, int V) {
    vector<int> result(V, -1);
    result[0] = 0;
    vector<bool> available(V, false);
    for (int u = 1; u < V; u++) {
        for (int v : adj[u]) if (result[v] != -1) available[result[v]] = true;
        int cr = 0;
        while (available[cr]) cr++;
        result[u] = cr;
        for (int v : adj[u]) if (result[v] != -1) available[result[v]] = false;
    }
}