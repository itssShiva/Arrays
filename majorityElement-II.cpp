#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int cnt1=0;
       int cnt2=0;
       int n=nums.size();
       int el1=INT32_MIN;
       int el2=INT32_MIN;
       for(int i=0;i<n;i++){
        if(cnt1==0&&nums[i]!=el2){
            cnt1=1;
            el1=nums[i];
        }
        else if(cnt2==0&&nums[i]!=el1){
            cnt2=1;
            el2=nums[i];
        }
        else if(el1==nums[i])cnt1++;
        else if(el2==nums[i])cnt2++;
        else{
            cnt1--;
            cnt2--;
        }
       }

       vector<int>ls;
       cnt1=0;
       cnt2=0;
       for(int i=0;i<n;i++){
        if(el1==nums[i])cnt1++;
        if(el2==nums[i])cnt2++;
       }
       int mini=(int)(n/3)+1;
       if(cnt1>=mini)ls.push_back(el1);
       if(cnt2>=mini)ls.push_back(el2);
        return ls;

    }
};

int main() {
    vector<int> nums = {3,2,3};
    Solution obj;
    vector<int> result = obj.majorityElement(nums);

    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
