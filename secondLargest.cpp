#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    int dusrabada(vector<int>&nums,int n){
        int largest=INT32_MIN;
        int slargest=INT32_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                slargest=largest;
                largest=nums[i];   
            }
        
        if(nums[i]<largest&&nums[i]>slargest){
            slargest=nums[i];
        }
        }
        if(slargest==INT32_MIN){
            return -1;
        }
        return slargest;
    }

    int secondLargestElement(vector<int>& nums) {
       int n=nums.size();
       int result=dusrabada(nums,n);
       return result;
      
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 9,7,10, 5,13}; 
    int result=obj.secondLargestElement(nums);
 cout<<"Second largest element inside array is: "<<result;
}