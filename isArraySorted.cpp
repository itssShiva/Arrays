#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isArraySort(vector<int>& nums, int n) {
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }
        return true;
    }

    bool isSorted(vector<int>& nums) {
        int n = nums.size();
        bool isSort = isArraySort(nums, n);
        return isSort;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 9, 4, 5}; 
    string result=obj.isSorted(nums)?"true":"false";
 cout<<result;

    return 0;
}
