#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = nums[0] + nums[1] + nums[2];
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = n - 1;
            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];
                if (abs(target - sum) < abs(target - closest)) {
                    closest = sum;
                }
                if (sum < target) j++;
                else k--;
            }
        }
        return closest;
    }
};

int main() {
    // Example input
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;

    Solution sol;
    int result = sol.threeSumClosest(nums, target);

    cout << "Closest sum to target " << target << " is: " << result << endl;

    return 0;
}
