#include<bits/stdc++.h>
using namespace std;

// T.C => O(log n)
// Iteration = n+ n/2 +n/4 + n/8 .... n/2^k.
//Therefore:  n/2^k => log n time complexity
// bestcase: 0(1) [found first time only]
//AvgCase : 0(logn)/
//workstCase :

// mid = start + (end-start)/2
// To avoid Array Overflow condition!!

int main(){

int arr[] = {1,2,3,4,5,6,7,8};
int key = 7;
int start,end;
int n = sizeof(arr) / sizeof(arr[0]);
start = 0;
end = n-1;


while(start<=end){
    int mid = (start+end)/2;
    if(arr[mid]==key){
        cout<<arr[mid]<<" "<<"Index:"<<mid;
        break;
    }

    else if(arr[mid]<key){
        start= mid+1;
    }

    else{
        end = mid-1;
    }
}


}