#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long double sum=0.0,avg;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        sum+=p[i];
    }
    avg=sum/n;
    cout<<fixed<<setprecision(12)<<avg;
    return 0;
}