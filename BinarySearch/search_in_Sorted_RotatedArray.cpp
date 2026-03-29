#include<bits/stdc++.h>
using namespace std;


int main(){

    int nums[] = {4,5,6,7,0,1,2};
    int target =4;
    int ans=-1,start=0,end = 6;

        while(start<=end){
            int mid = start + end - start/2;

            if(nums[mid] == target){
                cout<<mid;
                return mid;
            }

            else if(nums[mid]>=nums[0]){
                if(nums[start]<=target && nums[mid]>=target){
                    end = mid -1;
                }

                else{
                  start = mid +1;
                }
            }


            else{
                if(nums[mid]<=target && nums[end]>=target)  start = mid+1;

                else{
                    end = mid -1;
                }
            }
        }

        return -1;
    }
    
