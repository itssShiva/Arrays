#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    vector<int> genarateRow(int rows){
        long long ans=1;
        vector<int>ansrow;
        ansrow.push_back(ans);
        for(int col=1;col<rows;col++){
            ans=ans*(rows-col);
            ans=ans/col;
            ansrow.push_back(ans);
        }
        return ansrow;
    }



    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(genarateRow(i));
        }
        return ans;
    }
};
int main() {
    int numRows;
    cout << "Enter number of rows: ";
    cin >> numRows;

    Solution obj;
    vector<vector<int>> result = obj.generate(numRows);

    cout << "Pascal's Triangle:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}