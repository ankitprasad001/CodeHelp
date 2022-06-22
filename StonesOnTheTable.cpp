#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,ctr=0;
    cin>>n;

    string s;
    cin>>s;

    int ar[3]={0};

    for(int i=0;i<n;i++)
    {
        if(s[i]=='R' and s[i+1]=='R')
        {
            ctr++;
        }

        else if(s[i]=='G' and s[i+1]=='G')
        {
            ctr++;
        }

        else if(s[i]=='B' and s[i+1]=='B')
        {
            ctr++;
        }
    }

    cout<<ctr;
    return 0;
}
