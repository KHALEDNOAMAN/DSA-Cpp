#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<string> board(n, string(n, '.'));
        solve(board, 0, res);
        return res;
    }
    void solve(vector<string>& board, int col, vector<vector<string>>& res) {
        if(col == board.size()) { res.push_back(board); return; }
        // Assume valid check is implemented...
    }
};
