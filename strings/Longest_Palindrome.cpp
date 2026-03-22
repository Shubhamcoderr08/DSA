#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int left, int right) {
    while(left < right) {
        if(s[left] != s[right]) return false;
        left++;
        right--;
    }
    return true;
}

int main() {
    string s = "babad"; // hardcoded input

    int n = s.length();
    string ans = "";

    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            if(isPalindrome(s, i, j)) {
                if(j - i + 1 > ans.length()) {
                    ans = s.substr(i, j - i + 1);
                }
            }
        }
    }

    cout << "Longest Palindromic Substring: " << ans << endl;

    return 0;
}