#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int n=arr.size();
        int maxlen=0;

        for(int i=0;i<n;i++){
            int sum=0;
          for(int j=i;j<n;j++){
             sum+=arr[j];
            if(sum==0){
              maxlen=max(maxlen,j-i+1);
            }
          }
        }
        return maxlen;
    }
};
int main() {
    Solution sol;
    vector<int> arr = {15, -2, 2, -8, 1, 7, 10, 23};

    int result = sol.maxLen(arr);
    cout << "Length of the longest subarray with sum 0: " << result << endl;

    return 0;
}
