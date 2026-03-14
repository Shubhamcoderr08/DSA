#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> nums = {1, 2, 3};
    int n = nums.size();

    int i = n - 2;

    // Step 1: Find breakpoint
    while(i >= 0 && nums[i] >= nums[i+1]){
        i--;
    }

    // Step 2: Swap with next greater element
    if(i >= 0){
        int j = n - 1;
        while(nums[j] <= nums[i]){
            j--;
        }
        swap(nums[i], nums[j]);
    }

    // Step 3: Reverse the remaining part
    reverse(nums.begin() + i + 1, nums.end());

    cout << "Next Permutation: ";

    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}