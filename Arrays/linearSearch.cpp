
#include<bits/stdc++.h>
using namespace std;

int main (){

    int arr[5] = {3,6,7,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x ;
    cin>>x;
    bool found = false;

    for(int i =0; i<n;i++){
       if(arr[i]==x){
        found =true;
        break;
       }
    }

    if(found){
        cout<<x<<" "<<"Found in Array";
    }

    else{
        cout<<x<<" "<<"Not Found in Array";
    }
}