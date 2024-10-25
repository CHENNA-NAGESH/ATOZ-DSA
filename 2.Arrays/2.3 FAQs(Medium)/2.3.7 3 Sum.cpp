#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    //Function to find triplets having sum equals to target
    vector<vector<int>> threeSum(vector<int>& nums) {
        // Set to store unique triplets
        set<vector<int>> tripletSet;

        int n = nums.size();

        // Check all possible triplets
        for (int i = 0; i < n - 2; i++) {
            for (int j = i + 1; j < n - 1; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == 0) {
                        // Found a triplet that sums up to target
                        vector<int> temp = {nums[i], nums[j], nums[k]};
                        
                        /* Sort the triplet to ensure
                         uniqueness when storing in set*/
                        sort(temp.begin(), temp.end());
                        tripletSet.insert(temp);
                        
                    }
                }
            }
        }

        // Convert set to vector (unique triplets)
        vector<vector<int>> ans(tripletSet.begin(), tripletSet.end());

       //Return the ans
        return ans;
    }
};

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    // Create an instance of Solution class
    Solution sol;

    vector<vector<int>> ans = sol.threeSum(nums);

    // Print the result
    for (auto& triplet : ans) {
        cout << "[";
        for (auto& num : triplet) {
            cout << num << " ";
        }
        cout << "] ";
    }
    cout << "\n";

    return 0;
}

