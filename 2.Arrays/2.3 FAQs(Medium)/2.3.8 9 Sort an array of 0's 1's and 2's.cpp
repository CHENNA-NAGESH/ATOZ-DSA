#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to sort the array containing only 0s, 1s, and 2s
    void sortZeroOneTwo(vector<int>& nums) {
        
        // 3 pointers: low, mid, high
        int low = 0, mid = 0, high = nums.size() - 1; 
        while (mid <= high) {
            if (nums[mid] == 0) {
                
                /* Swap nums[low] and nums[mid], then 
                 move both low and mid pointers forward*/
                swap(nums[low], nums[mid]);
                low++;
                mid++;
                
            }
            else if (nums[mid] == 1) {
                // Move mid pointer forward
                mid++;
            }
            else {
                /* Swap nums[mid] and nums[high], 
                then move high pointer backward*/
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    vector<int> nums = {0, 2, 1, 2, 0, 1};
    
    // Create an instance of Solution class
    Solution sol;

    sol.sortZeroOneTwo(nums);
    
    // Print the array elements after sorting
    cout << "After sorting:" << endl;
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    
    return 0;
}

