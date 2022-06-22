#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    string a,b,c;
    getline(cin,a);
    getline(cin,b);

    for(i=0;i<a.length();i++)
    {
        if(a[i]!=b[i])
        {
            c=c+'1';
        }
        else
            c=c+'0';
    }
    cout<<c;
    return 0;
}