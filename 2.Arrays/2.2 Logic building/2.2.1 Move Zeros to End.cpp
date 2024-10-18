#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to move zeroes to the end
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        /*Create a temporary array to 
         store non-zero elements*/
        vector<int> temp;

        for (int i = 0; i < n; i++) {
            // Copy non-zero elements to temp
            if (nums[i] != 0) {
                temp.push_back(nums[i]);
            }
        }

        // Number of non-zero elements
        int nz = temp.size();

        for (int i = 0; i < nz; i++) {
            // Copy non-zero elements back to nums
            nums[i] = temp[i];
        }

        for (int i = nz; i < n; i++) {
            // Fill the rest with zeroes
            nums[i] = 0;
        }

    }
};

int main() {
    vector<int> nums = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};

    //Create an instance of Solution class
    Solution sol;

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";
    // Print the modified array
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }

    return 0;
}
