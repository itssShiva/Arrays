#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxiProduct = INT32_MIN;
        int n = nums.size();
        int pre = 1, suff = 1;

        for (int i = 0; i < n; i++) {
            if (pre == 0) pre = 1;
            if (suff == 0) suff = 1;

            pre *= nums[i];
            suff *= nums[n - i - 1];

            maxiProduct = max(maxiProduct, max(pre, suff));
        }

        return maxiProduct;
    }
};

int main() {
    Solution sol;

    // Example input: change as needed
    vector<int> nums = {2,4,-1,9,-3,-6,2};

    int result = sol.maxProduct(nums);

    cout << "Maximum product subarray: " << result << endl;

    return 0;
}
