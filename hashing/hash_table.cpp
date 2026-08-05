// Hash Table with Chaining
// Time: O(1) avg, Space: O(N)
#include <list>
#include <vector>
using namespace std;
class HashTable { int BUCKET; vector<list<int>> table; };