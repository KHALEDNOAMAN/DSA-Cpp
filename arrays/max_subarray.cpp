// Kadane's Algorithm
// Time: O(N), Space: O(1)
#include <vector>
#include <algorithm>
using namespace std;
int maxSubArray(vector<int>& nums) {
    int cur = 0, res = nums[0];
    for (int n : nums) {
        cur = max(n, cur + n);
        res = max(res, cur);
    }
    return res;
}