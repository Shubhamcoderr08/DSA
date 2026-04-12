// #include<bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> &nums){

//     int n = nums.size();

//     for(int i=0;i<n;i++){

//         int count = 0;

//         for(int j=0;j<n;j++){
//             if(nums[j] == nums[i]){
//                 count++;
//             }
//         }

//         if(count > n/2){
//             return nums[i];
//         }
//     }

//     return -1;
// }

// int main(){

//     vector<int> nums = {2,2,1,1,1,2,2};

//     cout<<"Majority Element = "<<majorityElement(nums);

// }

// better approach : 0(n) and 0(n) => hashmap

#include<bits/stdc++.h>
using namespace std;

int main (){

    vector<int> nums = {2,2,1,1,1,2,2};
     int n = nums.size();

 unordered_map<int,int> mp;

     for(int x:nums){
       mp[x]++;
     }

     for(auto it:mp){
        if(it.second>n/2){
            cout<<it.first;
        }
     }

     return 0;
}




// optimal approach : 0(n), 0(1)


// #include<bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> &nums){

//     int count = 0;
//     int candidate = 0;

//     for(int num : nums){

//         if(count == 0){
//             candidate = num;
//         }

//         if(num == candidate){
//             count++;
//         }
//         else{
//             count--;
//         }
//     }

//     return candidate;
// }

// int main(){

//     vector<int> nums = {2,2,1,1,1,2,2};

//     cout<<"Majority Element = "<<majorityElement(nums);

// }