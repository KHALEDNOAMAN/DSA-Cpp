#include <vector>
#include <algorithm>
using namespace std;
int maxSubarraySum(vector<int>& arr, int k) {
    int maxSum = 0, sum = 0;
    for(int i=0; i<arr.size(); i++) {
        sum += arr[i];
        if(i >= k-1) {
            maxSum = max(maxSum, sum);
            sum -= arr[i - (k - 1)];
        }
    }
    return maxSum;
}
