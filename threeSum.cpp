#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();

        for(int i=0;i<n;i++){
            if(i>0&&nums[i]==nums[i-1])continue;

            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum>0){
                    k--;
                }
                else if(sum<0){
                    j++;
                }
                else{
                    vector<int>temp={nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k&&nums[j]==nums[j-1])j++;
                    while(j<k&&nums[k]==nums[k+1])k--;

                }
            }

        }
        return ans;

        
    }
};
int main(){
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    Solution obj;
    vector<vector<int>> result = obj.threeSum(nums);

    cout << "Triplets that sum to 0 are:\n";
    for (auto triplet : result) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}