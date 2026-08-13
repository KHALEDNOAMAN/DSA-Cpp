// Autocomplete System using Trie
#include <string>
#include <vector>
using namespace std;
struct TrieNode {
    TrieNode* children[26] = {};
    bool isEnd = false;
};
class Autocomplete {
    TrieNode* root = new TrieNode();
public:
    void insert(const string& word) {
        auto node = root;
        for (char c : word) {
            if (!node->children[c-'a']) node->children[c-'a'] = new TrieNode();
            node = node->children[c-'a'];
        }
        node->isEnd = true;
    }
    vector<string> search(const string& prefix) {
        auto node = root;
        for (char c : prefix) {
            if (!node->children[c-'a']) return {};
            node = node->children[c-'a'];
        }
        vector<string> results;
        dfs(node, prefix, results);
        return results;
    }
    void dfs(TrieNode* node, string curr, vector<string>& res) {
        if (res.size() >= 3) return;
        if (node->isEnd) res.push_back(curr);
        for (int i=0;i<26;i++)
            if (node->children[i]) dfs(node->children[i], curr+(char)('a'+i), res);
    }
};