#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int largestElement(std::vector<int>& nums) {
        // Sort the array
        std::sort(nums.begin(), nums.end());

        // Largest element will be at the last index of the array.
        int largest = nums[nums.size() - 1];

        // Return the largest element in array.
        return largest;
    }
};

int main() {
    std::vector<int> nums = {3, 2, 1, 5, 2};

    // Create an instance of the Solution class
    Solution sol;

    int largest = sol.largestElement(nums);

    // Print the largest element.
    std::cout << largest << std::endl;

    return 0;
}
