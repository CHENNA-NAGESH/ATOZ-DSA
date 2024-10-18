#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersectionArray(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        vector<int> intersection;

        for(int n1 : nums1)
        {
            for(int n2 : nums2)
            {
                if(n1 == n2)
                {
                    s.insert(n1);
                }
            }
        }

        for(int n : s)
        {
            intersection.push_back(n);
        }

        return intersection;

    }
};

int main() {
    vector<int> nums1 = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> nums2 = {3, 3, 4, 4, 5, 8};

    // Create an instance of the Solution class
    Solution finder;

    // Get intersection of nums1 and nums2 using class method
    vector<int> ans = finder.intersectionArrays(nums1, nums2);

    cout << "Intersection of nums1 and nums2 is:" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

