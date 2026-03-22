#include <bits/stdc++.h>
using namespace std;
// BruteForce approach
int main() {

    // Hardcoded input
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    int m = 3;

    vector<int> nums2 = {2, 5, 6};
    int n = 3;

    // ---- Merge Logic (Your Approach) ----
    vector<int> temp;

    for(int i = 0; i < m; i++){
        temp.push_back(nums1[i]);
    }

    for(int i = 0; i < n; i++){
        temp.push_back(nums2[i]);
    }

    sort(temp.begin(), temp.end());

    for(int i = 0; i < m + n; i++){
        nums1[i] = temp[i];
    }

    // ---- Print Result ----
    cout << "Merged Array: ";
    for(int x : nums1){
        cout << x << " ";
    }

    return 0;
}