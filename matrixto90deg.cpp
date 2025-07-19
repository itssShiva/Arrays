#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


class Solution {
public:
    void rotateMatrix(vector<vector<int>>& matrix) {
         int n= matrix.size();

        for (int i = 0; i <n; i++)
        {
           for(int j=i+1;j<n;j++){
           swap(matrix[i][j],matrix[j][i]);
           }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};

int main() {
    Solution obj;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    cout << "Original Matrix:\n";
    for (auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    obj.rotateMatrix(matrix);
    cout << "\nMatrix After turning to 90deg:\n";
    for (auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}