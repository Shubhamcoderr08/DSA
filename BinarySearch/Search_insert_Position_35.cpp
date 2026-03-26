#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {1,2,3,5,6,8};
int n = sizeof(arr) / sizeof(arr[0]);
int start = 0;
int end = n-1;
int index = n;
int target = 7;

while(start<=end){
    int mid = start + (end-start)/2;
    if(arr[mid]==target){
     index = mid;
     cout<<index;
     return 0;
    }

    else if(arr[mid]<target){
        start = mid + 1;
    }

    else {
        index = mid;
        end = mid-1;
    }
}

cout<<index;
return 0;

}