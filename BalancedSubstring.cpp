#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,i,j,l,r,g=0,ca=0,cb=0,f=0;
    string s,sub;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        if(n>1)
        {
            l=0;
            r=n;
            g=0;
            while(l!=r && g==0)
            {   
                sub=s.substr(l,r);
                for(i=l;i<r;i++)
                {
                    if(sub[i]=='a'){
                        ca++;}
        
                    else if(sub[i]=='b'){
                        cb++;}
                }    
                if(ca!=cb)
                {
                    if(ca>cb)
                    {
                        if(sub[l]=='a')
                            l++;
                        else if(sub[r]=='a')
                            r--;
                    }
                    else
                    {
                        if(sub[l]=='b')
                            l++;
                        else if(sub[r]=='b')
                            r--;
                    }
                }
                else if(ca==cb)
                {
                    cout<<l+1<<" "<<r<<endl;
                    g=1;
                }    
                ca=0;
                cb=0;
            }
        }
        else if(n==1 || f==1)
        {
            cout<<-1<<" "<<-1<<endl;
        }
    }
    return 0;
}
