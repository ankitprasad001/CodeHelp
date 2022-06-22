#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        switch(n)
        {
            case 1:for(i=1;i<=9;i++)
                    {
                        if(i%3==0 && i%9!=0 && i%2!=0)
                        {
                            cout<<i<<endl;
                            break;
                        }
                    }
                    break;
            
            case 2:for(i=10;i<=99;i++)
                    {
                        if(i%3==0 && i%9!=0 && i%2!=0)
                        {
                            cout<<i<<endl;
                            break;
                        }
                    }
                    break;

            case 3:for(i=100;i<=999;i++)
                    {
                        if(i%3==0 && i%9!=0 && i%2!=0)
                        {
                            cout<<i<<endl;
                            break;
                        }
                    }
                    break;
            
            case 4: for(i=1000;i<=9999;i++)
                    {if(i%3==0 && i%9!=0 && i%2!=0)
                        {
                            cout<<i<<endl;
                            break;
                        }
                    }
                    break;
    }
    }
}