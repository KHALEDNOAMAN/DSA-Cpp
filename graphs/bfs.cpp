// BFS traversal
// Time: O(V+E), Space: O(V)
#include <queue>
#include <vector>
using namespace std;
void bfs(int s, vector<vector<int>>& adj, vector<bool>& vis) { queue<int> q; q.push(s); vis[s]=true; }