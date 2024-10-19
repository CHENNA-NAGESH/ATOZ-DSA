#include <bits/stdc++.h> 
using namespace std;

class Solution {
private:
    // Function to calculate nCr (combinations)
    int nCr(int n, int r) {
        /* Choosing the smaller value
        of r to optimize computation*/
        if (r > n - r) {
            r = n - r;
        }
        
        long long res = 1;
        /* Calculate nCr using iterative
        method to avoid overflow*/
        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return (int)res;
    }

public:
    // Function to generate Pascal's Triangle up to numRows rows
    vector<vector<int>> pascalTriangle(int numRows) {
        // Initialize the triangle vector with numRows rows
        vector<vector<int>> triangle(numRows);

        // Fill the triangle with Pascal's Triangle values
        for (int i = 0; i < numRows; i++) {
            // Resize current row to i + 1 elements
            triangle[i].resize(i + 1);
            for (int j = 0; j <= i; j++) {
                // Compute and store the value at position (i, j)
                triangle[i][j] = nCr(i, j);
            }
        }

        // Return completed Pascal's Triangle
        return triangle;
    }
};

int main() {
    // row number
    int r = 5; 
    // col number
    int c = 3;

    // Create an instance of the Solution class
    Solution sol; 
    
    vector<vector<int>> pascalTriangle = sol.generate(r);  

    /* Check if column number is valid
    and retrieve the element at (r, c)*/
    if (r >= c && c > 0) {
        int element = pascalTriangle[r - 1][c - 1];
        cout << "The element at position (" << r << "," << c << ") is: "
             << element << "\n";
    } else {
        // Print error message if column number is invalid
        cout << "Invalid column number!\n";
    }

    return 0;
}

