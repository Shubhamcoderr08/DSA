// A HashMap(unordered map) stores data in key → value pairs
// and provides O(1) average time complexity for operations.

#include <bits/stdc++.h>
using namespace std;


int main(){

    // unordered_map<int,int> mp;
    // mp[1] = 10;
    // mp[2] = 20;

    // cout<< mp[1]<<endl;
    // cout<< mp[2]<<endl;

    // mp[1] = 50;
    // cout<<mp[1]<<endl;

    // mp.erase(1);
    // cout<<mp[1];

    // mp[3] =30;
    // mp[4] = 40;


    // for(auto it:mp){
    //     cout<<it.first<<" "<<it.second;
    // }

    // imp for leetcode problems

//     vector<int> arr = {1,2,1,3,2};
//      unordered_map<int,int> freq;

//      for(int x: arr){
//         freq[x]++;
//      }

//      for(auto it : freq){
//     cout << it.first << " -> " << it.second << endl;
// }

   vector<int> nums ={10,20,20,20,10,30,30};

   unordered_map<int,int> count;

   for(int x:nums) {
       count[x]++;
   }

   for(auto it:count){
    cout<<it.first<<"->"<< it.second <<endl;
   }

}


// unordered map - T.C : O(n) 
// brute force : T.c : O(n^2)

