#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[] = {1,4,5,7,3};

int n = sizeof(arr)/sizeof(arr[0]);

for(int i =0;i<n;i++){
    

    for(int j =i;j>0;j--){
        if(arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
        }

        else{
            break;
        }
    }
}

for(int i =0 ;i<n;i++){

    cout<<arr[i]<<" ";
}


}