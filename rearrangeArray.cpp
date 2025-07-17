#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int posIndex=0;
        int negIndex=1;
        for(int i=0;i<n;i++){
        if(nums[i]<0){
            ans[negIndex]=nums[i];
            negIndex+=2;
        }
        else{
            ans[posIndex]=nums[i];
            posIndex+=2;
        }
    }
    return ans;
    }
};

int main(){
    vector<int>nums={2,9,-4,6,-7,3,-9};
    Solution obj;
    vector<int>result=obj.rearrangeArray(nums);
    for(auto it:result){
        cout<<it<<" ";
    }
}