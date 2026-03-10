#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {3,1,-2,-5,2,-4};
    int n = nums.size();

    vector<int> ans(n);

    int pos = 0;
    int neg = 1;

    for(int i = 0; i < n; i++){

        if(nums[i] > 0){
            ans[pos] = nums[i];
            pos += 2;
        }
        else{
            ans[neg] = nums[i];
            neg += 2;
        }
    }

    for(int x : ans){
        cout << x << " ";
    }

}