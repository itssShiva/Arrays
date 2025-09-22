#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st(nums1.begin(), nums1.end());
        vector<int> ans;
        for (int i = 0; i < nums2.size(); i++) {
            if (st.find(nums2[i]) != st.end()) {
                ans.push_back(nums2[i]);
                st.erase(nums2[i]); // ensures no duplicates in output
            }
        }
        return ans;
    }
};

int main() {
    // example input
    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {2, 2, 3, 4};

    Solution sol;
    vector<int> result = sol.intersection(nums1, nums2);

    cout << "Intersection: ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
