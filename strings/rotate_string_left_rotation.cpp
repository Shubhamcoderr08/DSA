#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "abcde";
    string goal = "cdeab";

    if(s.size() != goal.size()){
        cout << "false";
        return 0;
    }

    string temp = s + s;

    if(temp.find(goal) != -1)
        cout << "true";
    else
        cout << "false";

}