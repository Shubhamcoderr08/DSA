#include<bits/stdc++.h>
using namespace std;

// Function to find first occurrence
int findFirst(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1;
    int first = -1;

    while(s <= e) {
        int m = s + (e - s) / 2;

        if(nums[m] == target) {
            first = m;
            e = m - 1;  // move left
        }
        else if(nums[m] < target) {
            s = m + 1;
        }
        else {
            e = m - 1;
        }
    }
    return first;
}

// Function to find last occurrence
int findLast(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1;
    int last = -1;

    while(s <= e) {
        int m = s + (e - s) / 2;

        if(nums[m] == target) {
            last = m;
            s = m + 1;  // move right
        }
        else if(nums[m] < target) {
            s = m + 1;
        }
        else {
            e = m - 1;
        }
    }
    return last;
}

int main() {
    vector<int> nums = {5,7,7,8,8,10};
    int target = 8;

    int first = findFirst(nums, target);
    int last = findLast(nums, target);

    vector<int> ans = {first, last};

    cout << ans[0] << " " << ans[1];

    return 0;
}