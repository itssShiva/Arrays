#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int a = nums[i];
            int more = target - a;
            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {};
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 6, 2, 10, 3};
    int target = 13;
    vector<int> indices = obj.twoSum(nums, target);
    
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";  // Print indices
    }
    
    // Optionally, print the actual values too:
    // cout << "\nValues: ";
    // for (int idx : indices) {
    //     cout << nums[idx] << " ";
    // }

    return 0;
}
