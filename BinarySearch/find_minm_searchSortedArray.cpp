#include<bits/stdc++.h>
using namespace std;


int main(){
    int nums[] = {3,4,5,1,2};
      int start=0;
        int end=4;
        int ans = nums[0];
        
        while(start<=end){
            int mid = start + (end-start)/2;

            if(nums[mid]>=nums[0]){
                start = mid + 1;
            } 

            else{
                ans = nums[mid];
                end = mid -1;
            }
        }
        cout<<ans;
        return ans;
    }
