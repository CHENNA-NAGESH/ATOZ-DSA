#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    /* Function to rotate the given 
    matrix by 90 degrees clockwise*/
    void rotateMatrix(vector<vector<int>>& matrix) {
        
        /* Get the size of the matrix 
        (assuming it's a square matrix)*/
        int n = matrix.size();
        
        // Initialize new matrix to store rotated values
        vector<vector<int>> rotated(n, vector<int>(n, 0)); 
        
        // Iterate through elements of original matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                
                /* Rotate the element to its new 
                position in the rotated matrix
                New position is (j, n - i - 1) 
                in the rotated matrix*/
                
                rotated[j][n - i - 1] = matrix[i][j];
            }
        }
        
        //copy rotated elements to matrix
        for(int i = 0; i < rotated.size(); i++){
            for(int j = 0; j < rotated[0].size(); j++){
                matrix[i][j] = rotated[i][j];
            }
        }
    
    }
};

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; 
    
    // Create an instance of the Solution class
    Solution sol; 
    
    sol.rotate(arr); 
    
    // Print the rotated matrix
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            cout << arr[i][j] << " "; 
        }
        cout << endl; 
    }

    return 0;
}
