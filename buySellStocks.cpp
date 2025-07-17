#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxProfit=0;
        int mini=arr[0];
        int n=arr.size();
        int cost=0;
        for(int i=1;i<n;i++){
            cost=arr[i]-mini;
            maxProfit=max(maxProfit,cost);
            mini=min(arr[i],mini);
        }
        return maxProfit;
    }
};

int main(){
    Solution obj;
    vector<int>arr={10,7,6,1,13};
    int result=obj.maxProfit(arr);
    cout<<result;
}