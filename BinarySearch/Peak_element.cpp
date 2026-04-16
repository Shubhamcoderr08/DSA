#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums = {1,2,3,1};

     int start = 0;
     int end = nums.size()-1;

     while(start<end){

     int mid = start + (end-start)/2;
      
     if(nums[mid]<nums[mid+1]){
        start = mid+1;

     }

     else{
         end = mid;
     }

     }


     cout<<start;   // start or end 


     return 0;

}