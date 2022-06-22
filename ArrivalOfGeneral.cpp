#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,s,l,max=0,mid;
    cin>>n;
    int a[n+1];

    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int min=a[1];
    for(i=1;i<=n;i++)
    {
        if(a[i]<=min)
        {
            min=a[i];
            s=i;
        }

        if(a[i]>max)
        {
            max=a[i];
            l=i;
        }
    }
    if(s<l)
    {
        l=l-1;
    }
    if(n==2)
    {
        cout<<(n-s);
    }
    else{
        cout<<((l-1)+(n-s));
    }

    return 0;
}