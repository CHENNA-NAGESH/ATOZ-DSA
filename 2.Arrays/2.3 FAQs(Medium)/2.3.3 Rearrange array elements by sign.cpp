#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to rearrange the given array by signs
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        
        // Define 2 vectors, one for storing positive 
        // and the other for negative elements of the array
        vector<int> pos, neg;
  
        // Segregate the array into positives and negatives
        for (int i = 0; i < n; ++i) {
            if (nums[i] > 0) pos.push_back(nums[i]);
            else neg.push_back(nums[i]);
        }
  
        // Positives on even indices, negatives on odd
        for (int i = 0; i < n / 2; ++i) {
            nums[2 * i] = pos[i];
            nums[2 * i + 1] = neg[i];
        }
        
        // Return the result
        return nums;
    }
};

int main() {
    vector<int> A = {1, 2, -4, -5};
    
    // Create an instance of Solution class
    Solution sol;
    
    // Get the rearranged array
    vector<int> ans = sol.rearrangeArray(A);
    
    // Print the result
    for (int num : ans) {
        cout << num << " ";
    }
    
    return 0;
}

