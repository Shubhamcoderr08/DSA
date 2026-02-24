// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int a =0;
//     cin >> a;
//     cout<<"Completed DSA bhai bhai";
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    // cout<<"hey guys welcome to the DSA Program";
    // int a,b;
    // cin >>a >>b;

    // cout<<"Sum = " << a + b;

    // for (int i =0 ;i<6;i++){
    //     cout<<"Shubham"<<"\n";
    // }

    // int a ;
    // cin >> a;

    // if(a%2==0){
    //     cout<<"Given Number is Even :"<<a;
    // }    
    // else{
    //     cout<<"Given Number is Odd :"<<a;
    // }

    // factorial of a number

// int fact =1;
// int n ;
// cin>>n;
// for (int i = 1 ; i<=n;i++){
//  fact = fact * i;
// }
// cout<<"Factorial of Number:"<<fact;

// }


#include<bits/stdc++.h>
using namespace std;


// int main(){


    // int arr[5] = {100,2,3,4,5000};
    // //  cout<<arr[2]<<" ";
    //  cout<<"First Element of Array:"<<arr[0]<<endl;
    //  cout<<"Last  Element of Array:"<<arr[4]<<endl;
    //  arr[4] = 1001;
    //  cout<<"Last  Element of Array:"<<arr[4]<<endl;

    //  cout<<sizeof(arr);
     
//   for (int i =0 ;i<5;i++){
//     cout<<arr[i]<<" ";
//   }

// int arrr [] = {1,9,7,4};
// cout<<"Size of Array:"<<sizeof(arrr);

//  }
int main (){
    int arr[5];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }

    for(int i =0 ;i<n;i++){
        cout<<arr[i];
    }
}
