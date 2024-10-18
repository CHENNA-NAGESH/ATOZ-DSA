#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to rotate the array to the left by k positions
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size(); // Size of array
        k = k % n; // To avoid unnecessary rotations
        
        vector<int> temp;
        
        // Store first k elements in a temporary array
        for(int i=0; i < k; i++) {
            temp.push_back(nums[i]);
        }
        
        // Shift n-k elements of given array to the front
        for(int i=k; i < n; i++) {
            nums[i-k] = nums[i];
        }
        
        // Copy back the k elemnents at the end
        for(int i=0; i < k; i++) {
            nums[n-k+i] = temp[i];
        }
    }
};

// Helper function to print the array
void printArray(vector<int> nums) {
    for(int val : nums) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector nums = {1, 2, 3, 4, 5, 6};
    int k = 2;

    cout << "Initial array: ";
    printArray(nums);

    // Create an instance of the Solution class
    Solution sol;
    
    /* Function call to rotate the 
    array to the left by k places */
    sol.rotateArray(nums, k);
    
    cout << "Array after rotating elements by " << k << " places: ";
    printArray(nums);

    return 0;
}
