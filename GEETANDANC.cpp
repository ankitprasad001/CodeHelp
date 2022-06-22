#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>f1;
    vector<int>f2;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int q;
    cin>>q;
    int a,b,c;
    while(q--)
    {
        cin>>a>>b>>c;
        while(arr[a-1]!=a)
        {
            f1.push_back(arr[a-1]);
            a=arr[a-1];
        }
        
        while(arr[b-1]!=b)
        {
            f2.push_back(arr[b-1]);
            b=arr[b-1];
        }
        vector<int>v(f1.size()+f2.size());
        vector<int>::iterator it,st;

        it=set_intersection(f1.begin(),f1.end(),f2.begin(),f2.end(),v.begin());
        
        bool flag=false;
        for(st=v.begin();st!=it;++st){
            cout<<*st<<" ";
            if(*st==c){
                cout<<"YES"<<endl;
                flag=true;
            }
        }
        if(flag==false)
            cout<<"NO"<<endl;

        f1.clear();
        f2.clear();
        v.clear();
    }
    return 0;
}
