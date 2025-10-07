#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxInd = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (i > maxInd) return false;
            maxInd = max(maxInd, i + nums[i]);
        }
        return true;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {2, 3, 1, 1, 4};
    bool result = obj.canJump(nums);
    if (result)
        cout << "Can reach the last index " << endl;
    else
        cout << "Cannot reach the last index " << endl;
    return 0;
}
