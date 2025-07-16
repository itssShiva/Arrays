#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi=INT32_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
           
                sum+=nums[i];

            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};
int main(){
    Solution obj;
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
    int result=obj.maxSubArray(nums);
    cout<<result;
}