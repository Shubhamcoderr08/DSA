#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int i = 0;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int j =0 ;j<n;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }

// return  i+1;
cout<<i+1<<" ";

}