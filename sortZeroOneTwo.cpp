#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
           for(int j=0;j<n-1;j++){
            if(nums[j]>nums[j+1]){
            swap(nums[j],nums[j+1]); 
           }
           }
        }
    }
};
int main(){
    vector<int>nums;
    nums={1,0};
    Solution obj;
    obj.sortZeroOneTwo(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}