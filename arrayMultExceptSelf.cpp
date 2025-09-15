#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);

        // Prefix products
        for (int i = 1; i < n; i++) {
            ans[i] = ans[i - 1] * nums[i - 1];
        }

        // Suffix products
        int suffix = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= suffix;
            suffix *= nums[i];
        }

        return ans;
    }
};

int main() {
    // Example input
    vector<int> nums = {1, 2, 3, 4};

    // Create object of Solution
    Solution sol;
    vector<int> result = sol.productExceptSelf(nums);

    // Output result
    cout << "Product Except Self: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
