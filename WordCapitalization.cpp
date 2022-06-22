#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str,c="";
    getline(cin,str);

    str[0]=toupper(str[0]);
    c=c+str[0];
    for(int i=1;i<str.length();i++)
    {
        c=c+str[i];
    }
    cout<<c;
    return 0;
}