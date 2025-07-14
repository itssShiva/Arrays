#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:

    int missedNumber(vector<int>&nums,int n){
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<mpp.size();i++){
            if(mpp[i]==0){
                return i;
                break;
            }
        }
    }



    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int j=missedNumber(nums,n);
        return j;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {0,1,2,4,5,6}; 
    int result=obj.missingNumber(nums);
 cout<<"Missed element inside array is: "<<result;
}