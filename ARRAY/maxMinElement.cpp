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
    int max=INT_MIN,min=INT_MAX;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>max)
            max=v[i];
        if(v[i]<min)
            min=v[i];
    }
    cout<<"maximum element "<<max<<" minimum element "<<min;
    return 0;
}
