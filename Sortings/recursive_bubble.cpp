#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){

    // base case
    if(n == 1){
        return;
    }

    // one pass of bubble sort
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    // recursive call for remaining array
    bubbleSort(arr, n-1);
}

int main(){

    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}