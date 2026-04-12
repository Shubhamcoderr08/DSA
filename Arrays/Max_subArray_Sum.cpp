#include <bits/stdc++.h>
using namespace std;

// kadanes Algorithm

int max_sub_array(vector<int>& nums){
    int n = nums.size();
   int curr_sum =0;
   int max_sum = INT_MIN;


   for(int i=0;i<n;i++){
       curr_sum = curr_sum + nums[i];
       max_sum = max(curr_sum,max_sum);

       if(curr_sum<0){
        curr_sum = 0;
       }
   }

   return max_sum;

}


int main(){
    vector<int> nums = {1,2,3};
    int n = nums.size();
    cout<<max_sub_array(nums);
}