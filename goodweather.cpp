#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,i,c0,c1;
    cin>>t;
    int a[7];
    while(t--)
    {
        c0=0,c1=0;
        for(i=0;i<7;i++)
        {
            cin>>a[i];
            if(a[i]==1)
                c1++;
            else
                c0++;
        }        
        if(c1>c0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
        
}
