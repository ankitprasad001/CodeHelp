#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<vector<int>> mat;
    mat={{2,3},{1,3},{5,4},{6,4}};
    cout<<mat[0][1];
    pair<int,int>win;
    pair<int,int>loss;

    for(int i=0;i<mat.size();i++){
        win.first=mat[i][0];
    }
    return 0;
}


