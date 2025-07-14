#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    int consecutiveones(vector<int>&nums,int n){
        int currentCount=0;
        int maxCount=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                currentCount++;
                maxCount=max(currentCount,maxCount);
            }
            else{
                currentCount=0;
            }
        }
        if(maxCount>0){
            return maxCount;
        }
        else{
            return 0;
                }
           
    }

    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        consecutiveones(nums,n);
    }
};

    int main() {
    Solution obj;
    vector<int> nums ={1, 0, 0, 1, 1, 0, 0, 0}; 
    int result=obj.findMaxConsecutiveOnes(nums);
 cout<<"Maximum cosecutive 1's are: "<<result;
}
