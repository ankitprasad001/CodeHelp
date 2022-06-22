#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,j;
    cin>>x>>y;
    int c;
    x=x+1;
    while(x)
    {   
        c=0;
        for(i=1;i<=x;i++)
        {
            if(x%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            break;
        }
        x++;
    }
    if(x==y)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
