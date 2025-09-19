#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp = 0;
        int rp = n - 1;
        int maxWater = -1;
        while (lp < rp) {
            int width = rp - lp;
            int ht = min(height[lp], height[rp]);
            int currWater = width * ht;
            maxWater = max(maxWater, currWater);
            // move the smaller side inward
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> height(n);
    cout << "Enter heights: ";
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    Solution sol;
    int result = sol.maxArea(height);

    cout << "Maximum area of water container: " << result << endl;

    return 0;
}
