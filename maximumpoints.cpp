#include<bits/stdc++.h>
using namespace std;

int p=0,tim=0;
main()
{
    int t,a,b,c,x,y,z,i;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        cin>>x>>y>>z;

        for(i=1;i<=60;i++)
        {
            if(i<=20 && tim<240)
            {
                tim=tim+a;
                p=p+x;
            }

            else if(i<=40 && tim<240)
            {
                tim=tim+b;
                p=p+y;
            }

            else if(tim<240)
            {
                tim=tim+c;
                p=p+z;
            }
            if(tim>240)
            {
                break;
            }
        }
        cout<<p<<endl;
        p=0,tim=0;
    }
}