// Rotate Array by K
// Time: O(N), Space: O(1)
#include <vector>
#include <algorithm>
using namespace std;
void rotate(vector<int>& nums, int k) {
    if(nums.empty()) return;
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}