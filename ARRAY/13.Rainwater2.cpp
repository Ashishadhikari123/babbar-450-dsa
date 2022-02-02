//TC : O(n)
//Auxiliary Space : O(2n)

#include<bits/stdc++.h>
using namespace std;

int rainwaterTrap(vector<int>&v,int n)
{
    int res=0;
    int left[n],right[n];
    left[0]=v[0];
    right[n-1]=v[n-1];

    for(int i=1;i<n;i++)
        left[i]=max(left[i-1],v[i]);
    
    for(int i=n-2;i>=0;i--)
        right[i]=max(right[i+1],v[i]);

    for(int i=1;i<n-1;i++)
    {
        res=res+min(left[i],right[i])-v[i];
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
