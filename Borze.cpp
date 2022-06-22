#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,n;
    int i;
    getline(cin,s);

    for(i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        {
            n=n+'0';
        }

        else if(s[i]=='-' && s[i+1]=='.')
        {
            n=n+'1';
            i++;
        }

        else if(s[i]=='-' && s[i+1]=='-')
        {
            n=n+'2';
            i++;
        }
    }
    cout<<n;
    return 0;
}