#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][3];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    
    int s1=0,s2=0,s3=0;
    
    for(int i=0;i<n;i++)
    {
        s1+=a[i][0];
        s2+=a[i][1];
        s3+=a[i][2];
    }

    if(s1==0 && s2==0 && s3==0)
    {
        cout<<"YES";
    }

    else
    {
        cout<<"NO";
    }
    return 0;
}
