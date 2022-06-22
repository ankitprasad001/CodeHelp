#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
    while(++y)
    {
        int n=y,c=0;
        int a[10]={0};

        while(n)
        {
            int d=n%10;
            a[d]++;
            if(a[d]>1)
            {
                c=1;
                break;
            }
            n=n/10;
        }
        if(c==1)
        {
            continue;
        }
        break;
    }
    cout<<y;
    return 0;

}


