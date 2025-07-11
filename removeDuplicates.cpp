#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
     int removeDuplicate(vector<int>&nums,int n){
        int count=0;
        int i=0;
        int j=0;
        for(j=0;j<n-1;j++){
            if(nums[j]!=nums[i]){
              i++;
            nums[i]=nums[j];
            }
        }
       return i+1;
    }




    int removeDuplicates(vector<int>& nums) {
         int n=nums.size();
        int count=removeDuplicate(nums,n);
        return count;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 9, 10, 2}; 
    int result=obj.removeDuplicates(nums);
    cout<<result;
    return 0;
}