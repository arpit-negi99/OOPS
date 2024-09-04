/*
Construct a C++ program that removes a specific character from a given string 
and return the updated string.
Typical Input:     computer science is the future
Typical Output:   compuer science is he fuure
*/
#include<iostream>
using namespace std;
int rem(char ch,string*s,string*s2)
{
    int j=0;
    for(int i=0;i<(*s).length();i++)
    {
        if((*s)[i]!=ch)
        {
            (*s2)[j]=(*s)[i];
            j++;
        }
    }
    return j;
}
int main()
{
    char ch;
    int val;
    string s,s2;
    cout<<"Enter the character to remove:";
    cin>>ch;
    fflush(stdin);
    cout<<"Enter the string:";
    getline(cin,s);
    s2=s;
    val=rem(ch,&s,&s2);
    for(int i=0;i<val;i++)
    {
        cout<<s2[i];
    }
}