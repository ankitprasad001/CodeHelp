#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,t,i,j;
    char c;
    cin>>n>>t;
    string s;
    cin>>s;

    while(t--)
    {
        for(i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                c=s[i];
                s[i]=s[i+1];
                s[i+1]=c;
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}

 