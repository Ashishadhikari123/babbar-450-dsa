#include<bits/stdc++.h>
using namespace std;

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

    int temp=v[n-1];
    for(int i=n-1;i>=1;i--)
    {
        v[i]=v[i-1];
    }
    v[0]=temp;

    for(auto it : v)
        cout<<it<<" ";
    return 0;
}
