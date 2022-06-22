#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int d,i,c=0;

    while(n)
    {
        d=n%10;
        if(d==7 || d==4)
        {
            c++;
        }
        n=n/10;
    }
    if(c==4 || c==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}