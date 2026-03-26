#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();

    for (int i = 0; i < n - 1; i += 2) {
        if (nums[i] != nums[i + 1]) {
            return nums[i];
        }
    }

    return nums[n - 1];
}

int main() {
    vector<int> nums = {1,1,2,3,3,4,4,8,8};

    cout << "Single element: " << singleNonDuplicate(nums);

    return 0;
}