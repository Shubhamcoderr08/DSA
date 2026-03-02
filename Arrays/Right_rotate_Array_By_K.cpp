#include<bits/stdc++.h>
using namespace std;

// Rotate Array By  Right ....


void reverseArr(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);

    int x;
    cin >> x;

    x = x % n;   // important

    // Step 1
    reverseArr(arr, 0, n-x-1);

    // Step 2
    reverseArr(arr, n-x, n-1);

    // Step 3
    reverseArr(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}




