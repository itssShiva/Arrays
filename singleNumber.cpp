#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution{    
public: 

    int aloneNumber(vector<int>&nums,int n){
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        for(auto it:mpp){
            if(it.second==1){
                return it.first;
            }
        }
    }
    int singleNumber(vector<int>& nums){
        int n=nums.size();
       int result= aloneNumber(nums,n);
       return result;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1,1,2,2,3}; 
    int result=obj.singleNumber(nums);
 cout<<"Element occur only once in an array: "<<result;
}