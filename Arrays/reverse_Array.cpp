// Reverse the array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {12,6,3,15,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;

    while (start<end)
    {
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i =0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    

}