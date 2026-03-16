#include<bits/stdc++.h>
using namespace std;


int main() {

    vector<int> nums1 = {1,3};
    vector<int> nums2 = {2};

    vector<int> v;
    int i = 0, j = 0;

    while(i < nums1.size() && j < nums2.size()) {
        if(nums1[i] < nums2[j]) {
            v.push_back(nums1[i]);
            i++;
        } else {
            v.push_back(nums2[j]);
            j++;
        }
    }

    while(i < nums1.size()) {
        v.push_back(nums1[i]);
        i++;
    }

    while(j < nums2.size()) {
        v.push_back(nums2[j]);
        j++;
    }

    int n = v.size();
    double median;

    if(n % 2 == 0) {
        median = (v[n/2] + v[n/2 - 1]) / 2.0;
    } else {
        median = v[n/2];
    }

    cout << "Median: " << median << endl;

    return 0;
}