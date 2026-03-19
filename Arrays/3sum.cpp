#include <bits/stdc++.h>
using namespace std;

int main() {

    // Hardcoded input
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> ans;

    // Step 1: sort
    sort(nums.begin(), nums.end());

    int n = nums.size();

    for(int i = 0; i < n; i++){
        // skip duplicate for i
        if(i > 0 && nums[i] == nums[i-1]) continue;

        int j = i + 1;
        int k = n - 1;

        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];

            if(sum < 0){
                j++;
            }
            else if(sum > 0){
                k--;
            }
            else{
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;

                // skip duplicate for j
                while(j < k && nums[j] == nums[j-1]) j++;

                // skip duplicate for k
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }

    // Output
    cout << "Triplets with sum 0:\n";
    for(auto &vec : ans){
        cout << "[ ";
        for(int x : vec){
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}