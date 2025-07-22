#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int XOR=0;
            for(int j=i;j<n;j++){
                XOR=XOR^nums[j];

                if(XOR==k){
                    count++;
                }
            }
        }
        return count;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {5, 6, 7, 8, 9};
    int k = 5;

    int result = sol.subarraysWithXorK(nums, k);
    cout << "Number of subarrays with XOR " << k << ": " << result << endl;

    return 0;
}
