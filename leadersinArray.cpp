#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n=nums.size();
        
        vector<int>result;
      for(int i=0;i<n;i++){
        bool isLeader=true;
        for(int j=i+1;j<n;j++){
            if(nums[i]<nums[j]){
                isLeader=false;
                break;
            }
        }
        if(isLeader){
            result.push_back(nums[i]);
        }
        
      }
    
      return result;
    }
};

int main(){
    vector<int>nums={1, 5, 3, 1, 2};
    Solution obj;
   
    int n=nums.size();
    vector<int>result=obj.leaders(nums);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}