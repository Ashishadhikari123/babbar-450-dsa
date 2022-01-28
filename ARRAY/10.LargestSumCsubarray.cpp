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
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        b+=v[i];
        if(b>a)
            a=b;
        if(b<0)
            b=0;
    }
    cout<<a;
    return 0;
}
