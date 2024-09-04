/*
Implement a C++ program to find the non-repeating characters in string.
Typical Input: graphic era university
Typical Output: c  g  h  n  p  s  t  u  v  y
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1;
    cout<<"Enter the string: ";
    getline(cin,s1);
    int x=s1.length();
    // Mark duplicate characters with '#'
    for(int i=0;i<x;i++){
        int k=0;                 //To change current element to #
        if (s1[i]!='#'){         // Check to ensure current character is not already marked
            for (int j=i+1;j<x;j++){
                if (s1[i]==s1[j] && s1[i]!=' '){  // Exclude spaces
                    s1[j]='#';                  // Mark duplicate characters
                    k=1;
                }
            }
        }
        if(k==1){
            s1[i]='#';
        }
    }
    // Sort the string to get unique characters in order
    sort(s1.begin(),s1.end());
    // Print unique characters
    for (int i=0;i<x;i++) {
        if (s1[i]!='#'&&s1[i]!=' '){
            cout<<s1[i]<<" ";
        }
    }
    cout<<endl;
}
