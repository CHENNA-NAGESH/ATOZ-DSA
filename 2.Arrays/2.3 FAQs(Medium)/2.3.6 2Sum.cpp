#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*Function to find two indices in the array `nums`
    such that their elements sum up to `target`.*/
  
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        //create ans vector to store ans
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                
                /*if nums[i] + nums[j] is equal to 
                target put i and j in ans*/
                if (nums[i] + nums[j] == target) {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
                
            }
        }
        
        // Return {-1, -1} if no such pair is found
        return {-1, -1}; 
    }
};

int main() {
    int n = 5;
    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 14;
    
    // Create an instance of the Solution class
    Solution sol;
    
    // Call the twoSum method to find the indices
    vector<int> ans = sol.twoSum( nums, target);
    
    // Print the result
    cout << "This is the answer: [" << ans[0] << ", " << ans[1] << "]" << endl;
    
    return 0;
}

