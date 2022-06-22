#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    int i,j,x,y,t,c=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i,y=j;
            }
        }
    }

    while(x!=2 || y!=2)
    {
        if(x<2)
        {
            t=a[x][y];
            a[x][y]=a[x+1][y];
            a[x+1][y]=t;
            c++;
            x=x+1;
        }

        else if(x>2)
        {
            t=a[x][y];
            a[x][y]=a[x-1][y];
            a[x-1][y]=t;
            c++;
            x=x-1;
        }

        else if(y<2)
        {
            t=a[x][y];
            a[x][y]=a[x][y+1];
            a[x][y+1]=t;
            c++;
            y=y+1;
        }

        else
        {
            t=a[x][y];
            a[x][y]=a[x][y-1];
            a[x][y-1]=t;
            c++;
            y=y-1;
        }
    }
    cout<<c;
    return 0;
}
