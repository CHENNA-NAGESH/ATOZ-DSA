#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //function to find quadruplets having sum equal to target
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        // Size of the array
        int n = nums.size(); 
        
        // Set to store unique quadruplets
        set<vector<int>> st;
        
        // Checking all possible quadruplets
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    for (int l = k + 1; l < n; l++) {
                        // Calculate the sum of the current quadruplet
                        long long sum = nums[i] + nums[j] + nums[k] + nums[l];
                        
                        // Check if the sum matches the target
                        if (sum == target) {
                            vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                            // Sort the quadruplet to ensure uniqueness
                            sort(temp.begin(), temp.end());
                            st.insert(temp);
                        }
                    }
                }
            }
        }
        
        // Convert set to vector (unique quadruplets)
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};

int main() {
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    
    // Create an instance of Solution class
    Solution sol;

    vector<vector<int>> ans = sol.fourSum(nums, target);
    
    // Print the result
    cout << "The quadruplets are: \n";
    for (auto& it : ans) {
        cout << "[";
        for (auto& ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    
    return 0;
}
