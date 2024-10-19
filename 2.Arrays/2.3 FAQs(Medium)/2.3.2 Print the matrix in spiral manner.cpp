#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to print matrix in spiral manner.
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         // Define ans vector to store the result
        vector<int> ans; 
        
        // Number of rows
        int n = matrix.size();

        // Number of columns
        int m = matrix[0].size();
        
        // Initialize pointers for traversal
        int top = 0, left = 0;
        int bottom = n - 1, right = m - 1;
        
        // Traverse the matrix in spiral order
        while (top <= bottom && left <= right) {

            // Traverse from left to right
            for (int i = left; i <= right; ++i) {
                ans.push_back(matrix[top][i]);
            }

            top++;
            
            // Traverse from top to bottom
            for (int i = top; i <= bottom; ++i) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            
            // Traverse from right to left
            if (top <= bottom) {
                for (int i = right; i >= left; --i) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            // Traverse from bottom to top
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        //Return the ans
        return ans;
    }
};

int main() {
    vector<vector<int>> mat = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    // Create an instance of the Solution class
    Solution finder;
    
    // Get spiral order using class method
    vector<int> ans = finder.spiralOrder(mat);
    
    cout << "Elements in spiral order are: ";
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << endl;
    
    return 0;
}

