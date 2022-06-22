#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,u=0,l=0;
    string s,c;
    getline(cin,s);

    for(i=0;i<s.length();i++)
    {
        if(isupper(s[i]))
        {
            u++;
        }
        else if(islower(s[i]))
        {
            l++;
        }
    }
    //cout<<u<<" "<<l;
    if(u<l || u==l)
    {
        for(i=0;i<s.length();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
                c=c+s[i];
            }
            else
                c=c+s[i];
        }
    }
    else if(l<u)
    {
        for(i=0;i<s.length();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
                c=c+s[i];
            }
            else
                c=c+s[i];
        }
    }
    cout<<c;
    return 0;
}