#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int>& arr, int target) {
    int n = arr.size();
    int start = 0, end = n - 1;
    int ans = n;  // default if not found

    while(start <= end) {
        int mid = start + (end - start) / 2;

        if(arr[mid] >= target) {
            ans = mid;        // possible answer
            end = mid - 1;    // go left
        } else {
            start = mid + 1;  // go right
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1,2,4,5,7};
    int target = 6;

    cout << lowerBound(arr, target);
}