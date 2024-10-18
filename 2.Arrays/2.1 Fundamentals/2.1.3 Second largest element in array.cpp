#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Function to find the second largest element
    int secondLargestElement(vector<int>& nums) {
        int n = nums.size();
        
        // Check if the array has less than 2 elements
        if (n < 2) {
            // Indicating no second largest element is possible
            return -1; 
        }
        
        // Sort the vector in ascending order
        sort(nums.begin(), nums.end());

        // Largest element will be at last index
        int largest = nums.back();

        int secondLargest = -1;

        // Traverse the sorted vector from right to left
        for (int i = n-2; i >= 0; i--) {

            /* If the current element is not
            equal to the largest element*/
            if (nums[i] != largest) {

                /* Assign the current element 
                as the second largest and break*/
                secondLargest = nums[i];
                break;

            }
        }

        // Return the second largest element
        return secondLargest ;
    }
};

int main() {
    vector nums = {1, 2, 4, 6, 7, 5};

    //Create an instance of the Solution class
    Solution sol;

    /* Function call to find 
    the second largest element*/
    int ans = sol.secondLargestElement(nums);

    cout << "The second largest element is: " << ans << endl;
    return 0;
}
