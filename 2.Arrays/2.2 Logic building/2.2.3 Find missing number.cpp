#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the missing number 
    int missingNumber(vector<int>& nums) {
       // Calculate N from the size of nums
        int N = nums.size(); 
        
        // Outer loop that runs from 0 to N
        for (int i = 0; i <= N; i++) {
            /* Flag variable to check 
            if an element exists*/
            int flag = 0;
            
            // Search for the element using linear search
            for (int j = 0; j < N; j++) {
                if (nums[j] == i) {
                    // i is present in the array
                    flag = 1;
                    break;
                }
            }
            
            // Check if the element is missing (flag == 0)
            if (flag == 0) return i;
        }
        
        /*  The following line will never
        execute,it is just to avoid warnings*/
        return -1;
    }
};

int main() {
    vector<int> nums = {0,1, 2, 4};
    
    // Create an instance of the Solution class
    Solution solution;
    
    /* Call the missingNumber method 
    to find the missing number*/
    int ans = solution.missingNumber(nums);
    
    
    cout << "The missing number is: " << ans << endl;
    
    return 0;
}

