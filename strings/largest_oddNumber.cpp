#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "52";
    int n = s.length();

    for(int i = n-1; i >= 0; i--){

        int digit = s[i] - '0';

        if(digit % 2 == 1){
            cout << s.substr(0, i+1);
            return 0;
        }
    }

    cout << "";

}