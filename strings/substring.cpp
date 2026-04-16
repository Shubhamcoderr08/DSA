#include <bits/stdc++.h>
using namespace std;

// generate substrings -> continous part of String
// subsequence -> not continus(part of String)

// possible substring = n(n+1)/2;

int main()
{

    string s = "abc";
    int n = s.size();

    for (int i = 0; i < n; i++)
    {
        string temp = "";
        for (int j = i; j < n; j++)
        {
            temp += s[j]; // add character
            cout << temp << endl;
        }
    }
}
