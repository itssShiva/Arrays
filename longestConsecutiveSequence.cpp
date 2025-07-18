#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool ls(vector<int>&nums,int num){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==num){
                return true;
            }
           
        }
        return false;
    }

    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int x=0;
        int longest=1;
        for(int i=0;i<n;i++){
             x=nums[i];
            cnt=1;

            while(ls(nums,x+1)==true){
                x+=1;
                cnt+=1;
            }
            longest=max(cnt,longest);
        
        }
        return longest;
        
    }
};
int main() {
    Solution obj;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    int result = obj.longestConsecutive(nums);
    cout << result;

    return 0;
}