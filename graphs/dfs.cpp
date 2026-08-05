// DFS traversal
// Time: O(V+E), Space: O(V)
#include <vector>
using namespace std;
void dfs(int s, vector<vector<int>>& adj, vector<bool>& vis) { vis[s]=true; for(int u: adj[s]) if(!vis[u]) dfs(u, adj, vis); }