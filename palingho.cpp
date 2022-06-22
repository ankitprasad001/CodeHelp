#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    bool flag=true;
    string s;
    cout<<"Enter The string to be checked:- ";
    cin>>s;

    for(i=0,j=s.length()-1;i<j;i++,j--)
    {
        if(s[i]!=s[j])
        {
            flag=false;
            cout<<"Not palindrome!!\n";
            cout<<"The alphabets differed at index"<<i<<" and "<<j;
            break;
        }
    }
    if(flag==true)
    {
        cout<<"Palindrome string, no different alphabets found";
    }
    return 0;
}