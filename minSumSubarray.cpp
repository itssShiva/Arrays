#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int len = INT_MAX;
        int l = 0, r = 0, sum = 0;
        while (r < n) {
            sum += nums[r];
            while (sum >= target) {
                len = min(len, r - l + 1);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        return (len == INT_MAX) ? 0 : len;
    }
};

int main() {
    int n, target;
    cout << "Enter number of elements and target: ";
    cin >> n >> target;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution sol;
    int result = sol.minSubArrayLen(target, nums);

    cout << "Minimum subarray length: " << result << endl;
    return 0;
}
