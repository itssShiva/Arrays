#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void swapping(vector<int>& nums1, vector<int>& nums2, int ind1, int ind2) {
        if (nums1[ind1] > nums2[ind2]) {
            swap(nums1[ind1], nums2[ind2]);
        }
    }

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len = m + n;
        int gap = (len + 1) / 2;

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                if (left < m && right < m) {
                    swapping(nums1, nums1, left, right);  // both in nums1
                }
                else if (left < m && right >= m) {
                    swapping(nums1, nums2, left, right - m);  // nums1 & nums2
                }
                else {
                    swapping(nums2, nums2, left - m, right - m);  // both in nums2
                }
                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap + 1) / 2;
        }

        // Copy merged nums2 into nums1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }
    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    Solution obj;
    obj.merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}