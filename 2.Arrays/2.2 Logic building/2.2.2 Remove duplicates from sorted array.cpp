#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to remove duplicates from the array
    int removeDuplicates(vector<int>& nums) {
        
        /* Set data structure to store unique 
        elements maintaining the sorted order */
        set<int> s;
        
        // Add all elements from array to the set
        for (int val : nums) {
            s.insert(val);
        }
        
        // Get the number of unique elements
        int k = s.size();
        
        int j = 0;
        // Copy unique elements from set to array
        for (int val : s) {
            nums[j++] = val;
        }
        
        // Return the number of unique elements
        return k;
    }
};

// Helper function to print first n elements of the array
void printArray(vector<int> &nums, int n) {
    for(int i=0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    
    cout << "Original Array: ";
    printArray(nums, nums.size());
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Function call to remove duplicates from array
    int k = sol.removeDuplicates(nums);
    
    cout << "Array after removing the duplicates: ";
    printArray(nums, k);
    
    return 0;
}
