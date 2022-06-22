#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,n,a,sq,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>a;
        sq=sqrt(n);
        r=sq*a;
        cout<<r<<endl;
    }
    return 0;
}
