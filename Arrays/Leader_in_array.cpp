#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    int n = nums.size();

    vector<int> leaders;
    int maxRight = INT_MIN;

    // Traverse from right
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] > maxRight) {
            leaders.push_back(nums[i]);
            maxRight = nums[i];
        }
    }

    // Reverse to maintain order
    reverse(leaders.begin(), leaders.end());

    // Print result
    for (int x : leaders) {
        cout << x << " ";
    }

    return 0;
}