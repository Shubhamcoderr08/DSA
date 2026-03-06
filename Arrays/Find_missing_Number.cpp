#include <bits/stdc++.h>
using namespace std;


int main (){

    int arr[] = {0, 2, 3, 1, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int expectedSum = n * (n + 1) / 2;

    int actualSum = 0;

    for(int i = 0; i < n; i++){
        actualSum += arr[i];
    }

    int missing = expectedSum - actualSum;

    cout << "Missing number: " << missing;

    

}