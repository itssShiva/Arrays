#include<iostream>
#include<vector>
#include<set>
using namespace std;


class Solution {
public:
    vector<int> unionArray(vector<int>& nums1, vector<int>& nums2) {
    
        set<int>s;
        for(int i=0;i<nums1.size();i++){
           s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
           s.insert(nums2[i]);
        }

      vector<int>v(s.begin(),s.end());
      return v;
    }
};

int main(){
      Solution obj;
    vector<int> nums1 = {1,1,4,0,5,2,0};
    vector<int> nums2 = {1,1,4,0,5,2,0};
    vector<int>num3= obj.unionArray(nums1,nums2);
    for(int i=0;i<num3.size();i++){
            cout<<num3[i]<<" ";
    }
    
}
