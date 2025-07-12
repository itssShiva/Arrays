#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
        void moveZero(vector<int>&nums,int n){
            vector<int> temp;
            int count=0;
            for(int i=0;i<n;i++){
                if(nums[i]!=0){
                    temp.push_back(nums[i]);
                }
            }
            for(int i=0;i<temp.size();i++){
                nums[i]=temp[i];
                count=temp.size();    
            }
            for(int i=count;i<n;i++){
                nums[i]=0;
            }
        }




    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        moveZero(nums,n);

        
    }
};



int main(){
      Solution obj;
    vector<int> nums = {1,1,4,0,5,2,0};
    int n=nums.size();
    obj.moveZeroes(nums);
    for(int i=0;i<n;i++){
       cout<<nums[i]<<" ";
}
}