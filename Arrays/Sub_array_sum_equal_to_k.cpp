#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// brute force approach with T.C : 0(n)



int main(){

    vector<int> nums = {1,1,1};
    int n = nums.size();
    int k =2;
    int count = 0;

    for(int i =0 ;i<n;i++){
        int sum =0;


        for(int j =i;j<n;j++){
            sum = sum +nums[i];
            if(sum == k){
            count++;
        }
        }

        

       
    }

    cout<<count;

}


// Optimissed Approach :

// int main() {
    
//     vector<int> nums = {1,1,1};
//     int k = 2;

//     unordered_map<int,int> mp;
//     mp[0] = 1;

//     int sum = 0;
//     int count = 0;

//     for(int i=0;i<nums.size();i++){
//         sum += nums[i];

//         if(mp.find(sum-k) != mp.end()){
//             count += mp[sum-k];
//         }

//         mp[sum]++;
//     }

//     cout << count;

//     return 0;
// }