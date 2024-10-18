#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /* Initialize count and max_count 
        to track current and maximum consecutive 1s */
        int cnt = 0;
        int maxi = 0;

        // Traverse the vector
        for (int i = 0; i < nums.size(); i++) {

            /* If the current element is 1, 
            increment the count*/
            if (nums[i] == 1) {
                cnt++;

                /* Update maxi if current
                count is greater than maxi*/
                maxi = max(maxi, cnt);

            } else {
                /* If the current element 
               is 0, reset the count*/
                cnt = 0;
            }
        }
        // Return maximum count of consecutive 1s
        return maxi;
    }
};

int main() {
    
    vector nums = {1, 1, 0, 1, 1, 1};

    // Create an instance of the Solution class
    Solution sol;

    int ans = sol.findMaxConsecutiveOnes(nums);

    cout << "The maximum consecutive 1's are " << ans << endl;
    return 0;
}
