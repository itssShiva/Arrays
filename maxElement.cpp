#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    int maxElement(vector<int>&nums,int n){
            int maximum=0;
            for(int i=0;i<n-1;i++){
                if(nums[i]>nums[i+1]){
                    maximum=nums[i];
                }
            }
            return maximum;
    } 


    int largestElement(vector<int>& nums) {
        int n=nums.size();
        int max=maxElement(nums,n);
        return max;
    }
    
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 9, 10, 5}; 
    int result=obj.largestElement(nums);
 cout<<"Maximum element inside array is: "<<result;

    return 0;
}