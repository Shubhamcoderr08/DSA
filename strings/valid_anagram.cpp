#include<bits/stdc++.h>
using namespace std;


// brute Force
// int main(){

//     string s = "anagram";
//     string t = "nagaram";

//     if(s.length() != t.length()){
//         cout << "false";
//         return 0;
//     }

//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     if(s == t)
//         cout << "true";
//     else
//         cout << "false";

// }

// hashmap


// int main(){
// string s = "anagram";
// string t = "nagaram";

//  if(s.length() != t.length()){
//         cout << "false";
//         return 0;
//     }
// unordered_map<char,int>mp;

//     for(char c:s){
//         mp[c]++;
//     }

//     for(char c:t){
//         mp[c]--;
//     }

//     for(auto it:mp){
//         if(it.second!=0) {
//             cout<<"false";
//              return 0;
//         } 
//     }


//     cout<<"true";

//     return 0;

// }


// More Optimissed:


#include <iostream>
#include <vector>
using namespace std;

bool isAnagram(string s, string t) {
    if(s.length() != t.length()) return false;

    vector<int> freq(26, 0);

    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'a']++;   // add
        freq[t[i] - 'a']--;   // subtract
    }

    for(int x : freq){
        if(x != 0) return false;
    }

    return true;
}

int main() {
    string s = "anagram";
    string t = "nagaram";

    if(isAnagram(s, t)){
        cout << "True (Anagram)" << endl;
    } else {
        cout << "False (Not Anagram)" << endl;
    }

    return 0;
}


