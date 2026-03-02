#include<bits/stdc++.h>
using namespace std;


int main (){
    int arr[] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n = sizeof(arr)/sizeof(arr[0]); 

    // moving all the 0's to End!!!!
      int target =0;
      int pos =0;

for(int i =0 ;i<n;i++){
  if(arr[i]!=target){
    arr[pos] = arr[i];
    pos++;
  }
}

 while(pos<n){
  arr[pos] = 0;
   pos++;
 }
 
 
    for(int i =0 ;i<n;i++){
     cout<<arr[i]<<" ";
    }


  return 0;
}