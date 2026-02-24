
#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[] = {1,23,45,6};
    int largestNumber =0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > largestNumber){
            largestNumber = arr[i];
        }
    }
    cout<<"largest Element is:"<<largestNumber;
}