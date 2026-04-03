#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s) {
    int n = s.length();
    int len = 0;

    int i = n - 1;

    // skip trailing spaces
    while(i >= 0 && s[i] == ' ') {
        i--;
    }

    // count last word
    while(i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}

int main() {
    string s = "fly me to the sun ";  // hardcoded input

    int result = lengthOfLastWord(s);

    cout << "Length of last word: " << result << endl;

    return 0;
}