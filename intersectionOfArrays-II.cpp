#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        map<int, int> mpp;
        int n = nums1.size();
        int m = nums2.size();

        // count frequencies of nums1
        for (int i = 0; i < n; i++) {
            mpp[nums1[i]]++;
        }

        // check nums2 against map
        for (int i = 0; i < m; i++) {
            auto it = mpp.find(nums2[i]);
            if (it != mpp.end() && it->second > 0) {
                ans.push_back(it->first);
                it->second--;
            }
        }

        return ans;
    }
};

int main() {
    // Example input
    vector<int> nums1 = {1, 2, 2, 3};
    vector<int> nums2 = {2, 2, 3, 4};

    Solution sol;
    vector<int> result = sol.intersect(nums1, nums2);

    cout << "Intersection (with duplicates): ";
    for (int x : result) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
