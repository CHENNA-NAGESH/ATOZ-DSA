#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArrayByOne(vector<int>& nums) {
        // Store the first element in a temporary variable
        int n = nums.size();
        
        int temp = nums[n-1];
        
        
        
        // Shift elements to the right
        
        
        for(int i = n-1; i>=0; i--)
        {
        	nums[i+1] = nums[i];
		}
		
		nums[0] = temp;
       
       
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4, 5};

    solution.rotateArrayByOne(nums);

    for (int num : nums) {
        cout << num << " "; // Output the rotated array
    }

    return 0;
}

