// Given an array of integers nums and an integer target. 
// Return the indices(0 - indexed) of two elements in nums such
//  that they add up to target.

// Each input will have exactly one solution, and the same element cannot be used twice.
//  Return the answer in increasing order.
// Example 1
// Input: nums = [1, 6, 2, 10, 3], target = 7
// Output: [0, 1]
// Explanation:

// nums[0] + nums[1] = 1 + 6 = 7
// Example 2
// Input: nums = [1, 3, 5, -7, 6, -3], target = 0

// Output: [1, 5]

// Explanation:

// nums[1] + nums[5] = 3 + (-3) = 0

#include<bits/stdc++.h>
using namespace std;
// int main(){
// int arr[] = {1,6,2,10,3};
// // int arr[] ={2,5,5,11};
// int target ;
// cin>>target;
// int n = sizeof(arr)/sizeof(arr[0]);

// for (int i =0;i<n;i++){
//     for(int j=i+1;j<n;j++){
//        if(arr[i] + arr[j] == target){
//           cout<<i<<" "<<" "<<j;
//        }
//     }
//  }
  
// }


// optimissed Approach : T.C -> O(n)  using hashing 

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> mp; // number -> index

    for(int i = 0; i < nums.size(); i++) {
        int remaining = target - nums[i];

        // check
        if(mp.find(remaining) != mp.end()) {
            cout << "Answer: [" << mp[remaining] << ", " << i << "]" << endl;
            return 0;
        }

        // store
        mp[nums[i]] = i;
    }

    cout << "No solution found" << endl;
    return 0;
    
}