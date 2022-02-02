//Naive approach for trapping rain water problem

#include<bits/stdc++.h>
using namespace std;

int rainwaterTrap(vector<int>&v,int n)
{
    int res=0;
    for(int i=1;i<n-1;i++)
    {
        int left=v[i];

        for(int j=0;j<i;j++)
            left=max(left,v[j]);

        int right=v[i];
        for(int j=i+1;j<n;j++)
            right=max(right,v[j]);

        res=res+min(left,right)-v[i];
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<rainwaterTrap(v,n);
}
