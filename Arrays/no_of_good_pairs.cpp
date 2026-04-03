#include <bits/stdc++.h>
using namespace std;

// brute Force Approach 
int main(){

     vector<int> nums={0,1,1,3,5,6};

     int n = nums.size();
     int count  = 0;
     for(int i =0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
              count++;
            }
        }
     }

     cout<<"Number of Good Pairs:"<<count;
}


// Optimissed Approach using  Hashmap


