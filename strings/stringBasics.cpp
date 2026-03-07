#include<bits/stdc++.h>
using namespace std;


// int main() {
 
//     string s  = "shubham";
//   int length = s.length();
  

//   for(int i=0;i<length;i++){
//     cout<<s[i];
//   }
//     // cout << s;
//     // cout<<endl;
//     // cout<<length;
// }

// cout vowels in a string


// int main (){

//     string s = "education";
//     int count = 0;
//     int length = s.length();

//     for(int i = 0; i < length; i++){
//         if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
//             count++;
//         }
//     }

//     cout << "Vowels: " << count;
// }


// int main(){
//     string s ="fat";

//     int st =0;
//     int end = s.length()-1;

//     while(st<end){
//        char temp = s[st];
//        s[st] = s[end];
//        s[end] = temp;
//        st++;
//        end--;
//     }


    
//     // cout<<s;
// }


// is palindrome

int main (){
    string s = "education";
    string reversed ="";
     bool isPalindrome = false;
     int i = 0;
     int j = s.length()-1;

     while(i<j){
        if(s[i]==s[j]){
            isPalindrome = true;
            break;
        }
        i++;
        j--;

     }

     if(isPalindrome == true){
        cout<<"It is a Palindrome";
     }

     else{
        cout<<"Not a Palindrome";
     }

    

}