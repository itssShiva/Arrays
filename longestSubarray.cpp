#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int subArray(vector<int>& nums, int k, int n) {
        int sum = 0;
        int maxleng = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                sum = 0;
                for (int l = i; l <= j; l++) {
                    sum += nums[l];
                }
                if (sum == k) {
                    maxleng = max(maxleng, j - i + 1);
                }
            }
        }
        return maxleng;
    }

    int longestSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        int result = subArray(nums, k, n);
        return result;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 9, 10, 5};
    int k = 3;
    int result = obj.longestSubarray(nums, k);
    cout << result;

    return 0;
}
