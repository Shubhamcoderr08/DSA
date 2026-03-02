#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int size;
//     cin>> size;
//     int arr[size];
//     int sum = 0;

// for(int i=0;i<size;i++)
// {
//     cin>>arr[i];
//     // cout<<arr[i]<<" ";
// }

// for(int i =0;i<size;i++){
//     sum = sum + arr[i];
// }

// cout<<"Sum of Array:"<<sum;

//  return 0;

// }

// product of array Elements

// int main (){
//     int size;
//     cin>> size;
//     int arr[size];
//     int product = 1;

//     for (int  i =0 ;i<size;i++){
//        cin>>arr[i];
//     }

//     for(int i=0 ;i<size;i++){
//         product = product * arr[i];
//     }

//     cout<<"Product of array Element:"<<product;

//     return 0;
// }

// Linear Search

// int main (){

//     int arr[5] = {3,6,7,1,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x ;
//     cin>>x;
//     bool found = false;

//     for(int i =0; i<n;i++){
//        if(arr[i]==x){
//         found =true;
//         break;
//        }
//     }

//     if(found){
//         cout<<x<<" "<<"Found in Array";
//     }

//     else{
//         cout<<x<<" "<<"Not Found in Array";
//     }
// }

// Finding out minimum Number

// int main(){

//     int arr[4] = {3,4,0,5};
//      int minm = arr[0];
//      int size = sizeof(arr)/sizeof(arr[0]);
//      for(int i =0;i<size;i++){
//           if(arr[i]<minm){
//             minm = arr[i];
//           }
//      }
//      cout<<"Minimum Element:"<<minm;
//      return 0;
// }

// second larget element

// int main (){
//     int arr[5] = {7,5,2,8,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int largest = arr[0];
//     int secondlargest = arr[0];
//     for(int i =0; i<n;i++){
//       if(arr[i]>largest){
//        secondlargest = largest;
//         largest = arr[i];
//       }

//       else if(arr[i] > secondlargest && arr[i] != largest){
//          secondlargest = arr[i];
//       }
//     }

//    cout<<"Second Largest element:"<<secondlargest;
// }

// Count the number of elements in given array greater than a given number x

// int main(){
//     int arr[5] ={3,5,6,7,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int x;
//     cin>>x;
//     int count = 0;

//     for(int i =0;i<n;i++){
//       if(arr[i]>x){
//         count++;
//       }
//     }
//     cout<<"Number of element greater than"<<" "<<x<<" "<<"is"<<" "<<count;
//     return 0;
// }

// predict the output:

// int main(){
//   int sub[50],i;
//   for( i=0;i<=48;i++){
//     sub[i]=i;
//     cout<<sub[i]<<endl;
//   }
// }

// passing array to the Function

// check if the array contains duplicate or not

// Array contain duplicates.

// int main(){
//     int arr[8] = {1,2,3,4,5,5,1,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         for(int j =i+1;j<n;j++){
//           if(arr[i]==arr[j]){
//            cout<<"Array contains duplicate Values:"<<arr[i]<<" "<<arr[j];

//           }

//         }
//     }
// }

// copy array in an Reverse order into a new Array.

// int main (){
//     int arr1[5] = {1,2,3,4,5};
//     int n = sizeof(arr1)/sizeof(arr1[0]);
//     int arr2[n];

//     for(int i=0;i<n;i++){
//         arr2[i] =arr1[n-i-1] ;
//         cout<<arr2[i]<<" ";
//     }

//     cout<<endl;

//     for(int i =0;i<n;i++){
//         cout<<arr2[i]<<" ";
//     }

// }

// Reverse the array

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