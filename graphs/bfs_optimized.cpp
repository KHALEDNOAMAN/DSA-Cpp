// Optimized BFS
#include <queue>
#include <vector>
using namespace std;
void bfs(vector<vector<int>>& adj, int src, int V) {
    vector<bool> visited(V, false);
    queue<int> q;
    visited[src] = true; q.push(src);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) if (!visited[v]) { visited[v] = true; q.push(v); }
    }
}