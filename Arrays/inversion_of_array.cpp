#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach 
int main(){

    int arr[] = {2,3,4,5,6};
    int n = 5;
    int count =0 ;

    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }

            else{
                count =0;
            
            }
        }
    }

      
    cout<<"Possible Inversions:"<<count;

}