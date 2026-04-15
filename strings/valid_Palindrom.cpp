#include<bits/stdc++.h>
using namespace std;

// brute for : O(n) and O(n);
// int main(){
//     string s="A man, a plan, a canal: Panama";
//     string clean ="";
//     for(char c:s){
//         if(isalnum(c)){
//            clean += tolower(c);
//         }
//     }

//     string rev = clean;

//     reverse(rev.begin(),rev.end());

//     if(rev== clean){
//         cout<<"true";
//     }

//     else{
//         cout<<"false";
//     }

// }

//Optimissed Approach : O(n) and O(1);
//2 Pointer Method
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;

    while (left < right) {

        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";

    if (isPalindrome(s)) {
        cout << "True (Palindrome)" << endl;
    } else {
        cout << "False (Not a Palindrome)" << endl;
    }

    return 0;
}

