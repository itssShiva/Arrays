#include<iostream>
#include<vector>
#include<map>
using namespace std;
#include<iostream>
#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
            int n=nums.size();
            vector<int>ans;
            map<int,int>mpp;
            int repeating=-1;
            int missing=-1;
            for(int i=0;i<n;i++){
               
                    mpp[nums[i]]++;
            }
            for(int i=1;i<=n;i++){
                if(mpp[i]==2)
                {
                    repeating=i;
                }
                else if(mpp[i]==0)
                {
                    missing=i;
                } 
            }
            ans={repeating,missing};
            return ans;
    }
};



int main() {
    Solution sol;

    // Example input: 1 to n, but 2 is repeating and 3 is missing
    vector<int> nums = {1, 2, 3, 6, 7, 5, 7};

    vector<int> result = sol.findMissingRepeatingNumbers(nums);

    cout << "Repeating and Missing Number: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}