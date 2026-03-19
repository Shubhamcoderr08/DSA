#include <bits/stdc++.h>
using namespace std;

int main() {

    // Hardcoded input
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> ans;
    int n = nums.size();

    // Step 1: sort
    sort(nums.begin(), nums.end());

    // Step 2: first loop (i)
    for(int i = 0; i < n; i++) {

        // skip duplicate i
        if(i > 0 && nums[i] == nums[i-1]) continue;

        // Step 3: second loop (j)
        for(int j = i + 1; j < n; j++) {

            // skip duplicate j
            if(j > i + 1 && nums[j] == nums[j-1]) continue;

            // Step 4: two pointer
            int k = j + 1;
            int l = n - 1;

            while(k < l) {

                long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];

                if(sum < target) {
                    k++;
                }
                else if(sum > target) {
                    l--;
                }
                else {
                    ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                    k++;
                    l--;

                    // skip duplicate k
                    while(k < l && nums[k] == nums[k-1]) k++;

                    // skip duplicate l
                    while(k < l && nums[l] == nums[l+1]) l--;
                }
            }
        }
    }

    // Output
    cout << "Quadruplets:\n";
    for(auto &vec : ans) {
        cout << "[ ";
        for(int x : vec) {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}