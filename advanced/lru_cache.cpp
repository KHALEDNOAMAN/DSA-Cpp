// LRU Cache - O(1) get/put
#include <unordered_map>
#include <list>
using namespace std;

class LRUCache {
    int cap;
    list<pair<int,int>> dll;
    unordered_map<int, list<pair<int,int>>::iterator> cache;
public:
    LRUCache(int c) : cap(c) {}
    int get(int key) {
        if (!cache.count(key)) return -1;
        dll.splice(dll.begin(), dll, cache[key]);
        return cache[key]->second;
    }
    void put(int key, int val) {
        if (cache.count(key)) { dll.erase(cache[key]); }
        else if ((int)dll.size() >= cap) { cache.erase(dll.back().first); dll.pop_back(); }
        dll.push_front({key, val});
        cache[key] = dll.begin();
    }
};