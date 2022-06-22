#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t;
    cin>>n;
    int a[n];

    if(n%2!=0)
    {
        cout<<-1;
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            a[i]=i;
        }

        for(i=1;i<=n;i++)
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
            i++;
        }

        for(i=1;i<=n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}