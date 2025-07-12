#include<iostream>
#include<vector>
using namespace std;




class Solution {
public:

    void rotateArray(vector<int>&nums,int n){
        int k=2;
        int j=0;
        while(j!=k){
             int first=nums[0];
        for(int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=first;
        j++;
        }
       
    }


    void rotateArrayByOne(vector<int>& nums) {
        int n=nums.size();
        rotateArray(nums,n);
    }
};

int main(){
      Solution obj;
    vector<int> nums = {1,2,3,4,5,6,7};
    int n=nums.size(); 
    obj.rotateArrayByOne(nums);
    for(int i=0;i<n;i++){
       cout<<nums[i]<<" ";
 }
}