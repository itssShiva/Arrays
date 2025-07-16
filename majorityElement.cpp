#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(count==0){
                el=nums[i];
                count++;
            }
            else if(nums[i]==el){
                count++;
            }
            else{
                count--;
            }
        }
        return el;
    }
};
int main(){
    vector<int> nums={7, 0, 0, 1, 7, 7, 2, 7, 7};
    Solution obj;
    int result=obj.majorityElement(nums);
    cout<<result;
}