#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    int ar[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            ar[i][j]=1;
        }
    }

    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            if(a[i-1][j-1]%2!=0)
            {
                ar[i][j]=!ar[i][j];
                ar[i+1][j]=!ar[i+1][j];
                ar[i-1][j]=!ar[i-1][j];
                ar[i][j+1]=!ar[i][j+1];
                ar[i][j-1]=!ar[i][j-1];
            }
        }
    }

    for(i=1;i<4;i++)
    {
        for(j=1;j<4;j++)
        {
            cout<<ar[i][j];
        }
        cout<<endl;
    }
    return 0;
}




