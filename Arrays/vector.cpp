#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int size =3;
    
//     vector<int> arr(size);
//  // int size = arr.size()
//  // int capacity = arr.size()

//     for(int i = 0; i < size; i++){
//         cin >> arr[i]; 
//     }

//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";   
//     }

//     //arr.push_back(10);
//     return 0;
// }

// operation on vector


int main(){

    vector<int> v ={9,2,3,4};
     int n = v.size();
     for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
     }
     cout<<endl;
     
    sort(v.begin(),v.end());

       for(int i =0;i<n;i++){
        cout<<v[i]<<" ";
     }

}