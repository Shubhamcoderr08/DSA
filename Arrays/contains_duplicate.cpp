#include <bits/stdc++.h>
using namespace std;

// int main() {
//     vector<int> nums = {1, 2, 3, 1};

//     sort(nums.begin(), nums.end());

//     for (int i = 1; i < nums.size(); i++) {
//         if (nums[i] == nums[i - 1]) {
//             cout << "true";
//             return 0;
//         }
//     }

//     cout << "false";
//     return 0;
// }

// Optimissed Solution 


// int main(){

//     int nums[] = {1,2,3,6};

//     unordered_map<int,int> mp;
//      bool isdupli = false;
//     for (int x : nums){

//         mp[x]++;

//         if(mp[x]>1){
//             isdupli = true;
//         }   
//     } 

//     if(isdupli)  cout<<"true";
//     else   cout<< "false";

// }

// more optimissed using unordered set without storing in map


int main(){

    int nums[]  = {1,2,3,9};
     unordered_set<int> set;
      bool dupli = false;

     for(int x : nums) {
     
        if(set.count(x)){
            dupli = true;
        }
        set.insert(x);
        

     }

     if(dupli) cout<<"true";
     else cout<<"false";

}
