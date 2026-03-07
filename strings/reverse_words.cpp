#include<bits/stdc++.h>
using namespace std;

int main (){

    string s = "the sky is blue";
    int n = s.length();
    string ans = "";
    reverse(s.begin(),s.end());
    for(int i=0;i<n;i++){

        string word ="";

        while(i<n && s[i]!=' '){
            word = word + s[i];
            i++;
        }

        reverse(word.begin(),word.end());

        if(word.length() > 0){
            ans = ans + " " + word;
        }
    }

    cout<<ans.substr(1);

}