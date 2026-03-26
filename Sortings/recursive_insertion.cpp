#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){

    // base case
    if(n <= 1){
        return;
    }
b

    int last = arr[n-1];
    int j = n-2;

    // shift elements
    while(j >= 0 && arr[j] > last){
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = last;
}

int main(){

    int arr[] = {5,4,1,3,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}