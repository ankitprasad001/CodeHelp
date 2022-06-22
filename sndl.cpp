#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    vector<int> chef;
    vector<int> assist;
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
		bool flag=false;
        
        int arr[m];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }

		for(int i=1;i<=n;i++){
			for(int j=0;j<m;j++){
				if(j==arr[i]){
					flag=true;
				}
			}
			if(count % 2==0 and flag==false){
				chef.push_back(i);
			}
			else if(flag==false){
				assist.push_back(i);
			}
		}


        /*for (int j = 1; j <= n; j++)
        {
            for (int i = 0; i < m; i++)
            {
                if (i == arr[j])
                {
                    continue;
                }
                else
                {
                    if (count % 2 == 0)
                    {
                        chef.push_back(j);
                    }
                    else
                    {
                        assist.push_back(j);
                    }
                }
            }
        }*/

        if (chef.size() == 0)
        {
            cout << "\n";
        }
        else
        {
            for (int d = 0; d < chef.size(); d++)
            {
                cout << chef[d] << " ";
            }
            chef.clear();
            cout << "\n";
        }

        if (assist.size() == 0)
        {
            cout << "\n";
        }
        else
        {
            for (int d = 0; d < assist.size(); d++)
            {
                cout << assist[d] << " ";
            }
            assist.clear();
            cout << "\n";
        }
    }
    return 0;
}