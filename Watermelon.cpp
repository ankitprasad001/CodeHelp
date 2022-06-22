#include<bits/stdc++.h>
using namespace std;

main()
{
    int n;
    cin>>n;
    int d=n/2;
    int r=n-d;
    if(d%2==0 && r%2==0)
        cout<<"YES";
    else
        cout<<"NO";
}

