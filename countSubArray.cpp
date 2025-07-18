#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:

    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
       int preSum=0;
       int count=0;
       mpp[0]=1;
       for(int i=0;i<nums.size();i++){
        preSum+=nums[i];
        int remove=preSum-k;
        count+=mpp[remove];
        mpp[preSum]+=1;
       }
       return count;
    }
};
int main() {
    Solution obj;
    vector<int> nums = {1, -1,0};
    int k = 0;
    int result = obj.subarraySum(nums, k);
    cout << result;

    return 0;
}
